#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[ ])
{
QApplication app(argc, argv);

QPushButton button("Hello, Vladyslav!");
button.resize(200, 50);
button.show( );

return app.exec( );
}
