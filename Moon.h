#pragma once
#include "Shape.h"

class Moon :                                        //�ɳ�����Shape����������Moon��
    public Shape
{
private:
    int mo_Step;                                    //����Moon�Ĳ���mo_Step
public:
    virtual void InitShape (double x);              //������ʼ��Moon�Ķ��󲢻�ͼ�ĺ���
    virtual void MoveShape ();                      //�����ƶ�Moon�Ķ��󲢻�ͼ�ĺ���
    Moon ();                                        //Ĭ�ϳ�ʼ��Moon�Ĳ���Ϊ2
    ~Moon ();
};