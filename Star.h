#pragma once
#include "Shape.h"

class Star :
    public Shape
{
private:
    unsigned int st_Color;                          //����Star����ɫ����st_Color
    double st_Step;				                    //����Star�Ĳ���st_Star
public:
    virtual void InitShape (double x);              //������ʼ��Star�Ķ��󲢻�ͼ�ĺ���
    virtual void MoveShape ();                      //�����ƶ�Star�Ķ��󲢻�ͼ�ĺ���
    Star ();
    ~Star ();
};