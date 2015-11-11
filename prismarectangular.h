#ifndef PRISMARECTANGULAR_H
#define PRISMARECTANGULAR_H

#include <QDialog>
#include <QtGui>
#include <QtCore>

namespace Ui {
class prismaRectangular;
}

class prismaRectangular : public QDialog
{
    Q_OBJECT

public:
    explicit prismaRectangular(QWidget *parent = 0);
    ~prismaRectangular();

protected:
    void paintEvent(QPaintEvent *e);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();
     void on_pushButton_6_clicked();
      void on_pushButton_7_clicked();

private:
    Ui::prismaRectangular *ui;
    bool dibuja= false;
    double centerX;
    double centerY;

    QVector<QTransform> transforms;

};

#endif // PRISMARECTANGULAR_H
