#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "mainWindowUi.hpp"

class MainWindow : public QMainWindow
{
public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

protected:
  void setup();

private:
  Ui::MainWindowUi *ui = nullptr;
};

#endif // MAINWINDOW_H
