#ifndef POLIGONO_H
#define POLIGONO_H

#include <QDialog>
#include <QtGui>
#include <QtCore>

namespace Ui {
class poligono;
}

class poligono : public QDialog
{
    Q_OBJECT

public:
    explicit poligono(QWidget *parent = 0);
    ~poligono();

private:
    Ui::poligono *ui;
    bool dibuja = false;
    int lados=0;
    double centerX ;
    double centerY;

    QVector<QTransform> transforms;

protected:
    void paintEvent(QPaintEvent *e);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
};

#endif // POLIGONO_H
