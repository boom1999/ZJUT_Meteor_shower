#pragma once
#include"Moon.h"
#include"Star.h"
#include"Meteor.h"
#define MAXSHAPE 66                                //最大形状数，用于输出星星
#define MAXMETEOR 10                               //最大形状数，用于输出流星

class Sky                                          //组合类Sky包含三个由Shape共有派生出的类
{
private:
    int sky_X;                                     //声明幕布sky的横向大小sky_X
    int sky_Y;                                     //声明幕布sky的纵向大小sky_Y
public:
    Star* star1 = new Star[ MAXSHAPE ];            //动态声明四个Star的对象，以便将幕布按sky_x分成四部分输出Star
    Star* star2 = new Star[ MAXSHAPE ];
    Star* star3 = new Star[ MAXSHAPE ];
    Star* star4 = new Star[ MAXSHAPE ];
    Moon* moon1 = new Moon;                        //动态声明一个Moon的对象
    Meteor* meteor1 = new Meteor;                  //动态声明四个Meteor的对象实现多个流星输出
    Meteor* meteor2 = new Meteor;
    Meteor* meteor3 = new Meteor;
    Meteor* meteor4 = new Meteor;
    Sky ();                                        //将幕布大小默认初始化为1080*720
    Sky (int s_X, int s_Y);				           //在构造函数中创建窗口
    ~Sky ();                                       //delete动态创建的内存
};