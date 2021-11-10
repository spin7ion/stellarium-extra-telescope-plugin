/********************************************************************************
** Form generated from reading UI file 'ExtraTelescopePluginWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTRATELESCOPEPLUGINWINDOW_H
#define UI_EXTRATELESCOPEPLUGINWINDOW_H

#include <AngleSpinBox.hpp>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_extraTelescopePluginWindowForm
{
public:
    BarFrame *TitleBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *leftSpacer;
    QLabel *stelWindowTitle;
    QSpacerItem *rightSpacer;
    QPushButton *closeStelWindow;
    QGroupBox *groupBoxSlew;
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboBoxTelescope;
    QSpacerItem *verticalSpacer;
    QFrame *frameCoordinates;
    QGridLayout *gridLayout;
    QLabel *labelRA;
    AngleSpinBox *spinBoxExposure;
    QPushButton *pushButtonShoot;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButtonTime;

    void setupUi(QWidget *extraTelescopePluginWindowForm)
    {
        if (extraTelescopePluginWindowForm->objectName().isEmpty())
            extraTelescopePluginWindowForm->setObjectName(QString::fromUtf8("extraTelescopePluginWindowForm"));
        extraTelescopePluginWindowForm->resize(448, 274);
        TitleBar = new BarFrame(extraTelescopePluginWindowForm);
        TitleBar->setObjectName(QString::fromUtf8("TitleBar"));
        TitleBar->setGeometry(QRect(0, 0, 448, 25));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TitleBar->sizePolicy().hasHeightForWidth());
        TitleBar->setSizePolicy(sizePolicy);
        TitleBar->setMinimumSize(QSize(0, 25));
        TitleBar->setMaximumSize(QSize(16777215, 30));
        TitleBar->setFocusPolicy(Qt::NoFocus);
        TitleBar->setAutoFillBackground(false);
        TitleBar->setFrameShape(QFrame::StyledPanel);
        hboxLayout = new QHBoxLayout(TitleBar);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 4, 0);
        leftSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(leftSpacer);

        stelWindowTitle = new QLabel(TitleBar);
        stelWindowTitle->setObjectName(QString::fromUtf8("stelWindowTitle"));

        hboxLayout->addWidget(stelWindowTitle);

        rightSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(rightSpacer);

        closeStelWindow = new QPushButton(TitleBar);
        closeStelWindow->setObjectName(QString::fromUtf8("closeStelWindow"));
        closeStelWindow->setMinimumSize(QSize(16, 16));
        closeStelWindow->setMaximumSize(QSize(16, 16));
        closeStelWindow->setFocusPolicy(Qt::NoFocus);

        hboxLayout->addWidget(closeStelWindow);

        groupBoxSlew = new QGroupBox(extraTelescopePluginWindowForm);
        groupBoxSlew->setObjectName(QString::fromUtf8("groupBoxSlew"));
        groupBoxSlew->setGeometry(QRect(0, 30, 441, 231));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBoxSlew->sizePolicy().hasHeightForWidth());
        groupBoxSlew->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(groupBoxSlew);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        comboBoxTelescope = new QComboBox(groupBoxSlew);
        comboBoxTelescope->setObjectName(QString::fromUtf8("comboBoxTelescope"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBoxTelescope->sizePolicy().hasHeightForWidth());
        comboBoxTelescope->setSizePolicy(sizePolicy2);
        comboBoxTelescope->setInsertPolicy(QComboBox::InsertAlphabetically);

        verticalLayout_2->addWidget(comboBoxTelescope);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        frameCoordinates = new QFrame(groupBoxSlew);
        frameCoordinates->setObjectName(QString::fromUtf8("frameCoordinates"));
        sizePolicy1.setHeightForWidth(frameCoordinates->sizePolicy().hasHeightForWidth());
        frameCoordinates->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(frameCoordinates);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labelRA = new QLabel(frameCoordinates);
        labelRA->setObjectName(QString::fromUtf8("labelRA"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(labelRA->sizePolicy().hasHeightForWidth());
        labelRA->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(labelRA, 0, 0, 1, 1);

        spinBoxExposure = new AngleSpinBox(frameCoordinates);
        spinBoxExposure->setObjectName(QString::fromUtf8("spinBoxExposure"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(spinBoxExposure->sizePolicy().hasHeightForWidth());
        spinBoxExposure->setSizePolicy(sizePolicy4);
        spinBoxExposure->setInputMethodHints(Qt::ImhDigitsOnly);

        gridLayout->addWidget(spinBoxExposure, 0, 2, 1, 1);

        pushButtonShoot = new QPushButton(frameCoordinates);
        pushButtonShoot->setObjectName(QString::fromUtf8("pushButtonShoot"));
        pushButtonShoot->setMinimumSize(QSize(50, 24));

        gridLayout->addWidget(pushButtonShoot, 2, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 1, 2, 1, 1);


        verticalLayout_2->addWidget(frameCoordinates);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        pushButtonTime = new QPushButton(groupBoxSlew);
        pushButtonTime->setObjectName(QString::fromUtf8("pushButtonTime"));
        pushButtonTime->setMinimumSize(QSize(50, 24));

        verticalLayout_2->addWidget(pushButtonTime);

#ifndef QT_NO_SHORTCUT
        labelRA->setBuddy(spinBoxExposure);
#endif // QT_NO_SHORTCUT

        retranslateUi(extraTelescopePluginWindowForm);

        QMetaObject::connectSlotsByName(extraTelescopePluginWindowForm);
    } // setupUi

    void retranslateUi(QWidget *extraTelescopePluginWindowForm)
    {
        extraTelescopePluginWindowForm->setWindowTitle(QApplication::translate("extraTelescopePluginWindowForm", "Dialog", nullptr));
        stelWindowTitle->setText(QApplication::translate("extraTelescopePluginWindowForm", "Shutter and time control", nullptr));
        closeStelWindow->setText(QString());
        groupBoxSlew->setTitle(QApplication::translate("extraTelescopePluginWindowForm", "Shutter and time control", nullptr));
        labelRA->setText(QApplication::translate("extraTelescopePluginWindowForm", "Exposure, s", nullptr));
        pushButtonShoot->setText(QApplication::translate("extraTelescopePluginWindowForm", "Shoot", nullptr));
        pushButtonTime->setText(QApplication::translate("extraTelescopePluginWindowForm", "Update time", nullptr));
    } // retranslateUi

};

namespace Ui {
    class extraTelescopePluginWindowForm: public Ui_extraTelescopePluginWindowForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTRATELESCOPEPLUGINWINDOW_H
