#include "desenho.h"

Desenho::Desenho(QWidget *qw)
    : QWidget(qw), incrementar(0)
{
    QPushButton *btnMover = new QPushButton("Mover", this);
    btnMover->move(10, 150);
    connect(btnMover, &QPushButton::clicked, this, &Desenho::mover);
}
Desenho::~Desenho()
{

}

void Desenho::paintEvent(QPaintEvent *event){
    Q_UNUSED(event);
    QPainter painter(this);
    int x = 10;
    int y = 10 + incrementar;

    //Elipse
    painter.drawEllipse(x, y, 50, 50);
    x += 100;

    //Linha
    painter.drawLine(x, y, x + 50, y);
    x += 100;

    //Bola
    painter.drawRect(x, y, 50, 60);
}

void Desenho::mover(){
    incrementar += 10;
    update();
}
