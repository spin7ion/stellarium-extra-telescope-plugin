/*
 * Copyright (C) 2015 Kirill Snezhko
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Suite 500, Boston, MA  02110-1335, USA.
 */
#include "../ExtraTelescopePlugin.hpp"

#include "ExtraTelescopePluginWindow.hpp"
#include "ui_ExtraTelescopePluginWindow.h"

#include "StelApp.hpp"
#include "StelTranslator.hpp"
#include "StelLocaleMgr.hpp"
#include "StelModuleMgr.hpp"
#include "StelModule.hpp"
#include "StelPainter.hpp"

//#include "TelescopeClient.hpp"

#include "./NexStar/TelescopeClientDirectNexStar.hpp"

ExtraTelescopePluginWindow::ExtraTelescopePluginWindow()
{
    ui = new Ui_extraTelescopePluginWindowForm();
}

ExtraTelescopePluginWindow::~ExtraTelescopePluginWindow()
{
    delete ui;
}
void ExtraTelescopePluginWindow::retranslate()
{
	if (dialog)
	{
		ui->retranslateUi(dialog);
	}
}

void ExtraTelescopePluginWindow::setTime()
{
	if(TelescopeClientDirectNexStar* v = dynamic_cast<TelescopeClientDirectNexStar*>(currentTelescope())) {
	   // old was safely casted to NewType

	}

}

void ExtraTelescopePluginWindow::shoot()
{

}

void ExtraTelescopePluginWindow::updateTelescopeList()
{
	connectedSlotsByName.clear();
	ui->comboBoxTelescope->clear();

	QHash<int, QString> connectedSlotsByNumber = telescopeControl->getConnectedClientsNames();
	for (const auto slot : connectedSlotsByNumber.keys())
	{
		QString telescopeName = connectedSlotsByNumber.value(slot);
		connectedSlotsByName.insert(telescopeName, slot);
		ui->comboBoxTelescope->addItem(telescopeName);
	}
}

QSharedPointer<TelescopeClient> ExtraTelescopePluginWindow::currentTelescope() const
{
	int slot = connectedSlotsByName.value(ui->comboBoxTelescope->currentText());
	return telescopeControl->telescopeClient(slot);
}

void ExtraTelescopePluginWindow::onCurrentTelescopeChanged()
{
    auto telescope = currentTelescope();
    if (!telescope)
        return;
}

void ExtraTelescopePluginWindow::createDialogContent()
{
	//StelApp::getInstance().getModuleMgr().getAllModules();
	telescopeControl = (TelescopeControl*)StelApp::getInstance().getModule("TelescopeControl");

	StelPainter painter(StelApp::getInstance().getCore()->getProjection2d());
	painter.setColor(1,1,1,1);
	QFont font;
	painter.setFont(font);

	if(telescopeControl==Q_NULLPTR){
		qDebug( "JOPA!!!\r\n" );
		painter.drawText(300, 300, "JOPA!!!\r\n");
	} else{
		painter.drawText(300, 300, "HOOOOOORAY!!!\r\n" );
	}
	ui->setupUi(dialog);

	connect(&StelApp::getInstance(), SIGNAL(languageChanged()), this, SLOT(retranslate()));
	connect(ui->closeStelWindow, SIGNAL(clicked()), this, SLOT(close()));
	connect(ui->pushButtonShoot, SIGNAL(shoot()), this, SLOT(shoot()));
	connect(ui->pushButtonTime, SIGNAL(shoot()), this, SLOT(setTime()));
	QObject::connect(ui->comboBoxTelescope, static_cast<void(QComboBox::*)(int)>(&QComboBox::currentIndexChanged), this, &ExtraTelescopePluginWindow::onCurrentTelescopeChanged);

	updateTelescopeList();
}
