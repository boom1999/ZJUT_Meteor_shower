#pragma once
#include "Shape.h"

class Moon :                                        //由抽象类Shape共有派生出Moon类
    public Shape
{
private:
    int mo_Step;                                    //声明Moon的步长mo_Step
public:
    virtual void InitShape (double x);              //声明初始化Moon的对象并画图的函数
    virtual void MoveShape ();                      //声明移动Moon的对象并画图的函数
    Moon ();                                        //默认初始化Moon的步长为2
    ~Moon ();
};