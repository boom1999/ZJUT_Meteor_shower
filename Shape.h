#pragma once

#include <graphics.h>
#include <time.h>
#include <conio.h>
#include<stdlib.h>
#include<iostream>
#include<cmath>
//using namespace std;
using std::cout; using std::endl;

class Shape                                                  //抽象类shape
{
private:
    double sh_X;				                             //声明共有的坐标值sh_X
    double sh_Y;				                             //声明共有的坐标值sh_Y
    double sh_R;				                             //声明虚拟半径R
public:
    void setmembers (double X, double Y, double R);          //声明同时修改（sh_X,sh_Y）以及R的函数
    virtual void InitShape (double x) = 0;	                 //（纯虚函数）初始化形状并画图
    virtual void MoveShape () = 0;                           //（纯虚函数）计算移动后的坐标并画图
    double gets_X () { return sh_X; }                        //返回对象的sh_X
    double gets_Y () { return sh_Y; }                        //返回对象的sh_Y
    double gets_R () { return sh_R; }                        //返回对象的sh_R
    void sets_X (double x) { sh_X = x; }                     //修改对象的sh_X
    void sets_Y (double y) { sh_Y = y; }                     //修改对象的sh_Y
    void sets_R (double r) { sh_R = r; }                     //修改对象的sh_R
    Shape ();                                                //构造函数将形状的初始（sh_X,sh_Y）设置为（0，0）
    virtual ~Shape ();                                       //虚析构函数以满足使用指针的要求
};