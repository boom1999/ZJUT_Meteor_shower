#pragma once
#include"Moon.h"
#include"Star.h"
#include"Meteor.h"
#define MAXSHAPE 66                                //�����״���������������
#define MAXMETEOR 10                               //�����״���������������

class Sky                                          //�����Sky����������Shape��������������
{
private:
    int sky_X;                                     //����Ļ��sky�ĺ����Сsky_X
    int sky_Y;                                     //����Ļ��sky�������Сsky_Y
public:
    Star* star1 = new Star[ MAXSHAPE ];            //��̬�����ĸ�Star�Ķ����Ա㽫Ļ����sky_x�ֳ��Ĳ������Star
    Star* star2 = new Star[ MAXSHAPE ];
    Star* star3 = new Star[ MAXSHAPE ];
    Star* star4 = new Star[ MAXSHAPE ];
    Moon* moon1 = new Moon;                        //��̬����һ��Moon�Ķ���
    Meteor* meteor1 = new Meteor;                  //��̬�����ĸ�Meteor�Ķ���ʵ�ֶ���������
    Meteor* meteor2 = new Meteor;
    Meteor* meteor3 = new Meteor;
    Meteor* meteor4 = new Meteor;
    Sky ();                                        //��Ļ����СĬ�ϳ�ʼ��Ϊ1080*720
    Sky (int s_X, int s_Y);				           //�ڹ��캯���д�������
    ~Sky ();                                       //delete��̬�������ڴ�
};