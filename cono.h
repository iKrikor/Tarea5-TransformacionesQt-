#ifndef CONO_H
#define CONO_H

#include <QDialog>
#include <QtGui>
#include <QtCore>

namespace Ui {
class cono;
}

class cono : public QDialog
{
    Q_OBJECT

public:
    explicit cono(QWidget *parent = 0);
    cono(int _translateConeFactorX, int _translateConeFactorY, double _scaleConeFactor, int _rotateConeangle);
    ~cono();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();

protected:
    void paintEvent(QPaintEvent *e);

private:
    Ui::cono *ui;
    bool dibuja = false;
    double centerX;
    double centerY;

    QVector<QTransform> transforms;
};

#endif // CONO_H
