/*
 * Copyright (C) 2007 Fabien Chereau
 * Copyright (C) 2015 Kirill Snezhko
 * Copyright (C) 2018 Alexander Wolf
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

#include "ExtraTelescopePlugin.hpp"

#include "StelApp.hpp"
#include "StelCore.hpp"
#include "StelProjector.hpp"
#include "StelPainter.hpp"
#include "StelLocaleMgr.hpp"
#include "StelModuleMgr.hpp"

#include <QDebug>
#include "gui/ExtraTelescopePluginWindow.hpp"

/*************************************************************************
 This method is the one called automatically by the StelModuleMgr just 
 after loading the dynamic library
*************************************************************************/
StelModule* ExtraTelescopePluginInterface::getStelModule() const
{
	return new ExtraTelescopePlugin();
}

StelPluginInfo ExtraTelescopePluginInterface::getPluginInfo() const
{
	StelPluginInfo info;
	info.id = "ExtraTelescopePlugin";
	info.displayedName = N_("Extra Telescope Commands Plugin");
	info.authors = "Alexander Semion";
	info.contact = "spin7ion@gmail.com";
	info.description = N_("Extra telescope commands sender.");
	info.acknowledgements = N_("");
	info.version = EXTRATELESCOPEPLUGIN_VERSION;
	info.license = EXTRATELESCOPEPLUGIN_LICENSE;
	return info;
}

/*************************************************************************
 Constructor
*************************************************************************/
ExtraTelescopePlugin::ExtraTelescopePlugin()
{
	setObjectName("ExtraTelescopePlugin");
	mainWindow = new ExtraTelescopePluginWindow();
}

/*************************************************************************
 Destructor
*************************************************************************/
ExtraTelescopePlugin::~ExtraTelescopePlugin()
{
}

/*************************************************************************
 Reimplementation of the getCallOrder method
*************************************************************************/
double ExtraTelescopePlugin::getCallOrder(StelModuleActionName actionName) const
{

	return 0.;
}

bool ExtraTelescopePlugin::configureGui(bool show)
{
	if (show)
		mainWindow->setVisible(true);

	return true;
}

/*************************************************************************
 Init our module
*************************************************************************/
void ExtraTelescopePlugin::init()
{
	qDebug() << "init called for ExtraTelescopePlugin";

	StelGui* gui = dynamic_cast<StelGui*>(StelApp::getInstance().getGui());
	if (gui!=Q_NULLPTR)
	{
		/*toolbarButton =	new StelButton(Q_NULLPTR,
						   QPixmap(":/telescopeControl/button_Slew_Dialog_on.png"),
						   QPixmap(":/telescopeControl/button_Slew_Dialog_off.png"),
						   QPixmap(":/graphicGui/miscGlow32x32.png"),
						   "actionShow_Slew_Window");
		gui->getButtonBar()->addButton(toolbarButton, "065-pluginsGroup");*/
	}
}

void ExtraTelescopePlugin::deinit()
{
	delete mainWindow;
}

/*************************************************************************
 Draw our module. This should print "Hello world!" in the main window
*************************************************************************/
void ExtraTelescopePlugin::draw(StelCore* core)
{
	//StelPainter painter(core->getProjection2d());
	//painter.setColor(1,1,1,1);
	//painter.setFont(font);
	//painter.drawText(300, 300, "Hello, Dynamic World!");
}
