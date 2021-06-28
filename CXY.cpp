#include <QApplication>
#include <QLabel>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QLabel *q = new QLabel("Hello, I am CXY.");
    q->resize(300, 300);
    q->setText("Hello, I am CXY.");
    return a.exec();
}
