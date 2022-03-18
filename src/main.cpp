#include <QCoreApplication>

int main(int argc, char *argv[])
{
  QScopedPointer<QCoreApplication> app(new QCoreApplication(argc, argv));

  // if (qobject_cast<QApplication *>(app.data()))
  // {
  //   // start GUI version...
  // }
  // else
  // {
  //   // start non-GUI version...
  // }

  return app->exec();
}