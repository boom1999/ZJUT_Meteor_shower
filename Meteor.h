#pragma once
#include "Shape.h"

class Meteor :                                        //�ɳ�����Shape����������Meteor��
    public Shape
{
private:
    int me_Step;                                     //����Meteor�Ĳ���me_Step
public:
    virtual void InitShape (double x);               //������ʼ��Meteor�Ķ��󲢻�ͼ�ĺ���
    virtual void MoveShape ();                       //�����ƶ�Meteor�Ķ��󲢻�ͼ�ĺ���
    Meteor ();                                       //Ĭ�ϳ�ʼ��Meteor�Ĳ���Ϊ10
    ~Meteor ();
};