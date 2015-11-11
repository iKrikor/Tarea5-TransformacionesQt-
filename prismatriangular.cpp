//#include "prismatriangular.h"
//#include "ui_prismatriangular.h"

//prismaTriangular::prismaTriangular(QWidget *parent) :
//    QDialog(parent),
//    ui(new Ui::prismaTriangular)
//{
//    ui->setupUi(this);
//}

//prismaRectangular::prismaRectangular(int _translatePrismRFactorX, int _translatePrismRFactorY, double _scalePrismRFactor, int _rotatePrismRangle):ui(new Ui::cubo){
//    dibujaPrismaR = true;
//    translatePrismRFactorX = _translatePrismRFactorX;
//    translatePrismRFactorY = _translatePrismRFactorY;
//    scalePrismRFactor = _scalePrismRFactor;
//    rotatePrismRangle = _rotatePrismRangle;
//    ui->setupUi(this);
//}

//prismaTriangular::~prismaTriangular()
//{
//    delete ui;
//}


//void prismaRectangular::paintEvent (QpaintEvent *e){
//    QPainter painter(this);
//    QPen pointPen(Qt::black);
//    pointPen.setWidth(2);
//    painter.setPen(pointPen);
    
//    //Reajusta el centro a la mitad de la pantlla
//    int centerX = width()/2;
//    int centerY = height()/2;
//    painter.translate(centerX,centerY);
    
//    painter.scale(scaleCubeFactor,scaleCubeFactor);
//    painter.rotate(rotateCubeAngle);
//    painter.translate(translateCubeFactorX,translateCubeFactorY);
    
//    if(dibujaPrismaR)+
//    {
//        //Cuadrado 1
//        int x0 = 300;
//        int y0 = 350;
//        int x1 = 350;
//        int y1 = 350;
//        int x2 = 300;
//        int y2 = 200;
//        int x3 = 350;
//        int y3 = 200;
        
//        //Cuadrado 3
//        int x4 = x0+30;
//        int y4 = y0-50;
//        int x5 = x1+30;
//        int y5 = y1-50;
//        int x6 = x2+30;
//        int y6 = y2-50;
//        int x7 = x3+30;
//        int y7 = y3-50;
        
//        painter.drawLine(x0,y0,x1,y1);
//        painter.drawLine(x2,y2,x3,y3);
//        painter.drawLine(x2,y2,x0,y0);
//        painter.drawLine(x3,y3,x1,y1);
        
//        painter.drawLine(x4,y4,x5,y5);
//        painter.drawLine(x6,y6,x7,y7);
//        painter.drawLine(x6,y6,x4,y4);
//        painter.drawLine(x7,y7,x5,y5);
        
//        painter.drawLine(x0,y0,x4,y4);
//        painter.drawLine(x1,y1,x5,y5);
//        painter.drawLine(x2,y2,x6,y6);
//        painter.drawLine(x3,y3,x7,y7);
//    }
//}
