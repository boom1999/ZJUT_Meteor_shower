#pragma once
#include "Shape.h"

class Star :
    public Shape
{
private:
    unsigned int st_Color;                          //声明Star的颜色数据st_Color
    double st_Step;				                    //声明Star的步长st_Star
public:
    virtual void InitShape (double x);              //声明初始化Star的对象并画图的函数
    virtual void MoveShape ();                      //声明移动Star的对象并画图的函数
    Star ();
    ~Star ();
};