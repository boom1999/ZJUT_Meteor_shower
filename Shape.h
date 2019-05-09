#pragma once

#include <graphics.h>
#include <time.h>
#include <conio.h>
#include<stdlib.h>
#include<iostream>
#include<cmath>
//using namespace std;
using std::cout; using std::endl;

class Shape                                                  //������shape
{
private:
    double sh_X;				                             //�������е�����ֵsh_X
    double sh_Y;				                             //�������е�����ֵsh_Y
    double sh_R;				                             //��������뾶R
public:
    void setmembers (double X, double Y, double R);          //����ͬʱ�޸ģ�sh_X,sh_Y���Լ�R�ĺ���
    virtual void InitShape (double x) = 0;	                 //�����麯������ʼ����״����ͼ
    virtual void MoveShape () = 0;                           //�����麯���������ƶ�������겢��ͼ
    double gets_X () { return sh_X; }                        //���ض����sh_X
    double gets_Y () { return sh_Y; }                        //���ض����sh_Y
    double gets_R () { return sh_R; }                        //���ض����sh_R
    void sets_X (double x) { sh_X = x; }                     //�޸Ķ����sh_X
    void sets_Y (double y) { sh_Y = y; }                     //�޸Ķ����sh_Y
    void sets_R (double r) { sh_R = r; }                     //�޸Ķ����sh_R
    Shape ();                                                //���캯������״�ĳ�ʼ��sh_X,sh_Y������Ϊ��0��0��
    virtual ~Shape ();                                       //����������������ʹ��ָ���Ҫ��
};