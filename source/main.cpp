#include "types.hpp"

#include "config.hpp"

#include "mainWindow.hpp"

#include <QApplication>

std::string version()
{
  std::stringstream stream;
  stream << application::PROJECT_VERSION_MAJOR;
  stream << "." << application::PROJECT_VERSION_MINOR;
  stream << "." << application::PROJECT_VERSION_PATCH;
  stream << "-" << application::PROJECT_COMMIT_ID;

  return stream.str();
}

std::string info()
{
  std::stringstream stream;
  stream << application::PROJECT_NAME;
  stream << " - " << application::PROJECT_DESCRIPTION;
  stream << " " << version();

  return stream.str();
}

int main(int argc, char **argv)
{
  QApplication::setApplicationName(application::PROJECT_NAME.c_str());
  QApplication::setApplicationDisplayName(info().c_str());
  QApplication::setApplicationVersion(version().c_str());

  QApplication application(argc, argv);

  MainWindow mainWindow;
  mainWindow.show();

  return application.exec();
}
