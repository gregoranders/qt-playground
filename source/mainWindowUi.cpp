
#include "mainWindowUi.hpp"

#include <QCoreApplication>

namespace Ui {

  MainWindowUi::MainWindowUi(QWidget *parent)
      : QWidget(parent), actionQuit(nullptr), menuBar(nullptr), menuFile(nullptr), statusBar(nullptr),
        centralWidget(nullptr), verticalLayout(nullptr)
  {
  }

  MainWindowUi::~MainWindowUi()
  {
    delete verticalLayout;
    delete centralWidget;
    delete statusBar;
    delete menuFile;
    delete menuBar;
    delete actionQuit;
  }

  void MainWindowUi::setupUi(QMainWindow *mainWindow)
  {
    if (mainWindow->objectName().isEmpty())
      mainWindow->setObjectName(QString::fromUtf8("MainWindowUi"));

    actionQuit = new QAction(mainWindow);
    actionQuit->setObjectName(QString::fromUtf8("actionQuit"));

    menuBar = new QMenuBar(mainWindow);
    menuBar->setObjectName(QString::fromUtf8("menuBar"));

    menuFile = new QMenu(mainWindow);
    menuFile->setObjectName(QString::fromUtf8("menuFile"));

    statusBar = new QStatusBar(mainWindow);
    statusBar->setObjectName(QString::fromUtf8("statusBar"));

    mainWindow->setMenuBar(menuBar);
    mainWindow->setStatusBar(statusBar);

    menuFile->addAction(actionQuit);
    menuBar->addMenu(menuFile);

    centralWidget = new QWidget(mainWindow);
    centralWidget->setObjectName(QString::fromUtf8("centralWidget"));

    verticalLayout = new QVBoxLayout(centralWidget);
    verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

    retranslateUi(mainWindow);
  }

  void MainWindowUi::retranslateUi(QMainWindow *mainWindow)
  {
    actionQuit->setText(QCoreApplication::translate("MainWindowUi", "&Quit"));
#if QT_CONFIG(tooltip)
    actionQuit->setToolTip(QCoreApplication::translate("MainWindowUi", "Quit"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
    actionQuit->setShortcut(QCoreApplication::translate("MainWindowUi", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)

    menuFile->setTitle(QCoreApplication::translate("MainWindowUi", "&File"));
#if QT_CONFIG(tooltip)
    menuFile->setToolTip(QCoreApplication::translate("MainWindowUi", "File"));
#endif // QT_CONFIG(tooltip)

    statusBar->showMessage(QCoreApplication::translate("MainWindowUi", "Status bar"));
  }

} // namespace Ui
