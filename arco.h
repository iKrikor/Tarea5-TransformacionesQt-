#ifndef ARCO_H
#define ARCO_H

#include <QDialog>
#include <QtGui>
#include <QtCore>


namespace Ui {
    class Arco;
}

class Arco : public QDialog
{
    Q_OBJECT
    
public:
    explicit Arco(QWidget *parent = 0);
    ~Arco();
    
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
    Ui::Arco *ui;
    bool dibuja = false;
    int angulo = 0;
    int radio = 0;
    double centerX ;
    double centerY;
        QVector<QTransform> transforms;
};

#endif // ARCO_H
