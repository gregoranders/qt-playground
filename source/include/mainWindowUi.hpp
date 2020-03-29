#ifndef MAINWINDOWUI_H
#define MAINWINDOWUI_H

#include "types.hpp"

#include <QtWidgets/QAction>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace Ui {

  class MainWindowUi : public QWidget
  {
  public:
    MainWindowUi(QWidget *parent = nullptr);
    ~MainWindowUi();

    void setupUi(QMainWindow *mainWindow);
    void retranslateUi(QMainWindow *mainWindow);

    QAction *actionQuit = nullptr;

    QMenuBar *menuBar  = nullptr;
    QMenu *   menuFile = nullptr;

    QStatusBar *statusBar = nullptr;

    QWidget *centralWidget = nullptr;

    QVBoxLayout *verticalLayout = nullptr;
  };

} // namespace Ui

#endif // MAINWINDOWUI_H
