#pragma once

#include <QWidget>
#include <QPainter>
#include <QPushButton>

#include "ui_desenho.h"

namespace Ui {
class Desenho;
}

class Desenho : public QWidget
{
    Q_OBJECT
public:
    Desenho(QWidget *parent = nullptr);
    ~Desenho();

protected:
    void paintEvent(QPaintEvent *event) override;

private slots:
    void mover();

private:
    int incrementar;
    Ui::Desenho *ui;

};


