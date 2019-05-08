#pragma once
#include "Shape.h"

class Meteor :                                        //由抽象类Shape共有派生出Meteor类
    public Shape
{
private:
    int me_Step;                                     //声明Meteor的步长me_Step
public:
    virtual void InitShape (double x);               //声明初始化Meteor的对象并画图的函数
    virtual void MoveShape ();                       //声明移动Meteor的对象并画图的函数
    Meteor ();                                       //默认初始化Meteor的步长为10
    ~Meteor ();
};