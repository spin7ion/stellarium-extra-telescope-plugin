/*
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

#ifndef EXTRATELESCOPEPLUGINWINDOW_HPP
#define EXTRATELESCOPEPLUGINWINDOW_HPP

#include "StelDialog.hpp"
//#include </home/spin7ion/tmp/stellarium/plugins/TelescopeControl/src/TelescopeControl.hpp>
#include <TelescopeControl.hpp>
#include <QFont>

class Ui_extraTelescopePluginWindowForm;

class ExtraTelescopePluginWindow : public StelDialog
{
    Q_OBJECT

public:
	ExtraTelescopePluginWindow();
    ~ExtraTelescopePluginWindow();


public slots:
    void retranslate();
    void setTime();
    void shoot();

protected:
    void createDialogContent();

private:
    Ui_extraTelescopePluginWindowForm *ui;
    ExtraTelescopePlugin *extraTelescopePlugin;
    void updateTelescopeList();
    TelescopeControl* telescopeControl;
    QHash<QString, int> connectedSlotsByName;
    void onCurrentTelescopeChanged();
    QSharedPointer<TelescopeClient> currentTelescope() const;

};

#endif // DYNAMICPLUGINTEMPLATEWINDOW_HPP
