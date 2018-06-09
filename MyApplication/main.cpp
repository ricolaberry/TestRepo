#include <QDebug>

#include "../MyLibraries/MyLibrary/MyClass.h"

int main(int argc, char** argv) {
	Q_UNUSED(argc)
	Q_UNUSED(argv)

	qDebug() << "Start MyApplication";
	MyClass myClass;
	qDebug() << "5 + 8 = " << myClass.add(5, 8);

	qDebug() << "End MyApplication";

	return 0;
}
