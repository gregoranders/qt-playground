#include "mainWindow.hpp"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(nullptr)
{
  ui = new Ui::MainWindowUi(this);
  ui->setupUi(this);
  setup();
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::setup() { connect(ui->actionQuit, &QAction::triggered, this, &MainWindow::close); }
