#include "Shape.h"

void Shape::setmembers (double X, double Y, double R)      //������������Shape�Ĳ���sh_X��sh_Y��sh_R
{
    sh_X = X;
    sh_Y = Y;
    sh_R = R;
}

Shape::Shape ()                                            //Ĭ������sh
{
    sh_X = 0;
    sh_Y = 0;
    sh_R = 0;
}

Shape::~Shape ()
{
}