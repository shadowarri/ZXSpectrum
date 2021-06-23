/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include <keyboardwidget.h>
#include <screenwidget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Load_a_screenshot;
    QAction *actionE_xit;
    QAction *actionReset;
    QAction *actionNMI;
    QAction *actionAbout;
    QAction *actionSpectrum_48k;
    QAction *actionSpectrum_128k;
    QAction *actionSave_a_screenshot;
    QAction *actionLoad_a_snapshot;
    QAction *actionSave_a_snapshot;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *twControls;
    QWidget *tab;
    QGridLayout *gridLayout_3;
    KeyboardWidget *keyboard;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QPushButton *pbDown;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pbUp;
    QPushButton *pbFire;
    QPushButton *pbRight;
    QSpacerItem *verticalSpacer;
    QPushButton *pbLeft;
    QSpacerItem *horizontalSpacer;
    ScreenWidget *screen;
    QCheckBox *cbCaptureKeyboard;
    QToolButton *btnReset;
    QCheckBox *cbShowControls;
    QPushButton *btnTest;
    QComboBox *cbJoystickInterface;
    QComboBox *cbPal;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menuMachine;
    QMenu *menu_Help;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1001, 696);
        action_Load_a_screenshot = new QAction(MainWindow);
        action_Load_a_screenshot->setObjectName(QString::fromUtf8("action_Load_a_screenshot"));
        actionE_xit = new QAction(MainWindow);
        actionE_xit->setObjectName(QString::fromUtf8("actionE_xit"));
        actionReset = new QAction(MainWindow);
        actionReset->setObjectName(QString::fromUtf8("actionReset"));
        actionNMI = new QAction(MainWindow);
        actionNMI->setObjectName(QString::fromUtf8("actionNMI"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionSpectrum_48k = new QAction(MainWindow);
        actionSpectrum_48k->setObjectName(QString::fromUtf8("actionSpectrum_48k"));
        actionSpectrum_48k->setCheckable(true);
        actionSpectrum_48k->setChecked(false);
        actionSpectrum_128k = new QAction(MainWindow);
        actionSpectrum_128k->setObjectName(QString::fromUtf8("actionSpectrum_128k"));
        actionSpectrum_128k->setCheckable(true);
        actionSpectrum_128k->setChecked(true);
        actionSave_a_screenshot = new QAction(MainWindow);
        actionSave_a_screenshot->setObjectName(QString::fromUtf8("actionSave_a_screenshot"));
        actionLoad_a_snapshot = new QAction(MainWindow);
        actionLoad_a_snapshot->setObjectName(QString::fromUtf8("actionLoad_a_snapshot"));
        actionSave_a_snapshot = new QAction(MainWindow);
        actionSave_a_snapshot->setObjectName(QString::fromUtf8("actionSave_a_snapshot"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        twControls = new QTabWidget(centralwidget);
        twControls->setObjectName(QString::fromUtf8("twControls"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_3 = new QGridLayout(tab);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        keyboard = new KeyboardWidget(tab);
        keyboard->setObjectName(QString::fromUtf8("keyboard"));

        gridLayout_3->addWidget(keyboard, 0, 0, 1, 1);

        twControls->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pbDown = new QPushButton(tab_2);
        pbDown->setObjectName(QString::fromUtf8("pbDown"));
        QFont font;
        font.setPointSize(24);
        pbDown->setFont(font);

        gridLayout_2->addWidget(pbDown, 3, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 4, 1, 1, 1);

        pbUp = new QPushButton(tab_2);
        pbUp->setObjectName(QString::fromUtf8("pbUp"));
        pbUp->setFont(font);

        gridLayout_2->addWidget(pbUp, 1, 1, 1, 1);

        pbFire = new QPushButton(tab_2);
        pbFire->setObjectName(QString::fromUtf8("pbFire"));
        pbFire->setFont(font);

        gridLayout_2->addWidget(pbFire, 2, 4, 1, 1);

        pbRight = new QPushButton(tab_2);
        pbRight->setObjectName(QString::fromUtf8("pbRight"));
        pbRight->setFont(font);

        gridLayout_2->addWidget(pbRight, 2, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 1, 1, 1);

        pbLeft = new QPushButton(tab_2);
        pbLeft->setObjectName(QString::fromUtf8("pbLeft"));
        pbLeft->setFont(font);

        gridLayout_2->addWidget(pbLeft, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 2, 3, 1, 1);

        twControls->addTab(tab_2, QString());

        gridLayout->addWidget(twControls, 5, 0, 1, 7);

        screen = new ScreenWidget(centralwidget);
        screen->setObjectName(QString::fromUtf8("screen"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(screen->sizePolicy().hasHeightForWidth());
        screen->setSizePolicy(sizePolicy);

        gridLayout->addWidget(screen, 0, 0, 1, 7);

        cbCaptureKeyboard = new QCheckBox(centralwidget);
        cbCaptureKeyboard->setObjectName(QString::fromUtf8("cbCaptureKeyboard"));

        gridLayout->addWidget(cbCaptureKeyboard, 3, 1, 1, 1);

        btnReset = new QToolButton(centralwidget);
        btnReset->setObjectName(QString::fromUtf8("btnReset"));

        gridLayout->addWidget(btnReset, 3, 6, 1, 1);

        cbShowControls = new QCheckBox(centralwidget);
        cbShowControls->setObjectName(QString::fromUtf8("cbShowControls"));

        gridLayout->addWidget(cbShowControls, 3, 0, 1, 1);

        btnTest = new QPushButton(centralwidget);
        btnTest->setObjectName(QString::fromUtf8("btnTest"));

        gridLayout->addWidget(btnTest, 3, 5, 1, 1);

        cbJoystickInterface = new QComboBox(centralwidget);
        cbJoystickInterface->addItem(QString());
        cbJoystickInterface->addItem(QString());
        cbJoystickInterface->addItem(QString());
        cbJoystickInterface->setObjectName(QString::fromUtf8("cbJoystickInterface"));

        gridLayout->addWidget(cbJoystickInterface, 3, 4, 1, 1);

        cbPal = new QComboBox(centralwidget);
        cbPal->addItem(QString());
        cbPal->addItem(QString());
        cbPal->setObjectName(QString::fromUtf8("cbPal"));

        gridLayout->addWidget(cbPal, 3, 3, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1001, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menuMachine = new QMenu(menubar);
        menuMachine->setObjectName(QString::fromUtf8("menuMachine"));
        menu_Help = new QMenu(menubar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menuMachine->menuAction());
        menubar->addAction(menu_Help->menuAction());
        menu->addAction(action_Load_a_screenshot);
        menu->addAction(actionSave_a_screenshot);
        menu->addSeparator();
        menu->addAction(actionLoad_a_snapshot);
        menu->addAction(actionSave_a_snapshot);
        menu->addSeparator();
        menu->addAction(actionE_xit);
        menuMachine->addAction(actionReset);
        menuMachine->addAction(actionNMI);
        menuMachine->addSeparator();
        menuMachine->addAction(actionSpectrum_48k);
        menuMachine->addAction(actionSpectrum_128k);
        menu_Help->addAction(actionAbout);

        retranslateUi(MainWindow);

        twControls->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_Load_a_screenshot->setText(QCoreApplication::translate("MainWindow", "Load a screenshot...", nullptr));
        actionE_xit->setText(QCoreApplication::translate("MainWindow", "E&xit", nullptr));
        actionReset->setText(QCoreApplication::translate("MainWindow", "&Reset", nullptr));
        actionNMI->setText(QCoreApplication::translate("MainWindow", "&NMI", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "&About...", nullptr));
        actionSpectrum_48k->setText(QCoreApplication::translate("MainWindow", "Spectrum 48k", nullptr));
        actionSpectrum_128k->setText(QCoreApplication::translate("MainWindow", "Spectrum 128k", nullptr));
        actionSave_a_screenshot->setText(QCoreApplication::translate("MainWindow", "Save a screenshot...", nullptr));
        actionLoad_a_snapshot->setText(QCoreApplication::translate("MainWindow", "&Load a snapshot...", nullptr));
        actionSave_a_snapshot->setText(QCoreApplication::translate("MainWindow", "Save a snapshot...", nullptr));
        twControls->setTabText(twControls->indexOf(tab), QCoreApplication::translate("MainWindow", "Keyboard", nullptr));
        pbDown->setText(QCoreApplication::translate("MainWindow", "\342\206\223", nullptr));
        pbUp->setText(QCoreApplication::translate("MainWindow", "\342\206\221", nullptr));
        pbFire->setText(QCoreApplication::translate("MainWindow", "@", nullptr));
        pbRight->setText(QCoreApplication::translate("MainWindow", "\342\206\222", nullptr));
        pbLeft->setText(QCoreApplication::translate("MainWindow", "\342\206\220", nullptr));
        twControls->setTabText(twControls->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Joystick", nullptr));
        cbCaptureKeyboard->setText(QCoreApplication::translate("MainWindow", "CaptureKeyboard", nullptr));
        btnReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        cbShowControls->setText(QCoreApplication::translate("MainWindow", "Show controls", nullptr));
        btnTest->setText(QCoreApplication::translate("MainWindow", "TEST", nullptr));
        cbJoystickInterface->setItemText(0, QCoreApplication::translate("MainWindow", "Cursor Interface", nullptr));
        cbJoystickInterface->setItemText(1, QCoreApplication::translate("MainWindow", "Kempston Interface", nullptr));
        cbJoystickInterface->setItemText(2, QCoreApplication::translate("MainWindow", "ZX Interface 2", nullptr));

        cbPal->setItemText(0, QCoreApplication::translate("MainWindow", "Pal1", nullptr));
        cbPal->setItemText(1, QCoreApplication::translate("MainWindow", "Pal2", nullptr));

        menu->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menuMachine->setTitle(QCoreApplication::translate("MainWindow", "&Machine", nullptr));
        menu_Help->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
