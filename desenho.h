#pragma once

#include <QWidget>
#include <QPainter>
#include <QPushButton>

class Desenho : public QWidget
{
    Q_OBJECT
public:
    Desenho(QWidget *qw = nullptr);
    ~Desenho();

protected:
    void paintEvent(QPaintEvent *event) override;

private slots:
    void mover();

private:
    int incrementar;
};


