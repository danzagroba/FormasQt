#include "desenho.h"

Desenho::Desenho(QWidget *parent):
    QWidget(parent),
    incrementar(0),
    ui(new Ui::Desenho)
{
    ui->setupUi(this);

    connect(ui->btnMover, &QPushButton::clicked, this, &Desenho::mover);
}
Desenho::~Desenho()
{
    delete ui;
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

    //Quadrado
    painter.drawRect(x, y, 50, 50);
}

void Desenho::mover(){
    incrementar += 10;
    update();
}
