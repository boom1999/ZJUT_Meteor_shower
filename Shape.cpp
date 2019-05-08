#include "Shape.h"

void Shape::setmembers (double X, double Y, double R)      //参数传入设置Shape的参数sh_X和sh_Y，sh_R
{
    sh_X = X;
    sh_Y = Y;
    sh_R = R;
}

Shape::Shape ()                                            //默认设置sh
{
    sh_X = 0;
    sh_Y = 0;
    sh_R = 0;
}

Shape::~Shape ()
{
}