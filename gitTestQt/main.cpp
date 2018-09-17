#include "GitWgt.h"
#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	GitWgt w;
	w.show();

	return a.exec();
}
