#include "Meteor.h"

void Meteor::InitShape (double x)
{
    IMAGE meteor; IMAGE meteor_mask;                                   //��������ͼ��meteor������ͼ�������ͼmeteor_mask
    loadimage (&meteor, "meteor.jpg", 50, 30);                         //��������ͼƬ������50*30�Ĵ�С����
    loadimage (&meteor_mask, "meteor_mask.jpg", 50, 30);               //��������ͼƬ������ͼ������50*30�Ĵ�С����
    sets_X (rand () % 1080);                                           //�������s_X
    sets_Y (rand () % 720);                                            //�漴����s_Y
    putimage ((int)gets_X (), (int)gets_Y (), &meteor_mask, SRCAND);   //������Ԫ��դ����ͼƬ��ʹ����ͼƬ��Χ�ڱ߿�͸��
    putimage ((int)gets_X (), (int)gets_Y (), &meteor, SRCPAINT);
}

void Meteor::MoveShape ()
{
    IMAGE meteor; IMAGE meteor_mask;                                   //��������ͼ��meteor������ͼ�������ͼmeteor_mask
    loadimage (&meteor, "meteor.jpg", 50, 30);                         //��������ͼƬ������50*30�Ĵ�С����
    loadimage (&meteor_mask, "meteor_mask.jpg", 50, 30);               //��������ͼƬ������ͼ������50*30�Ĵ�С����
    sets_X (gets_X () + 2.0 * me_Step);                                //�����ƶ����s_X
    sets_Y (gets_Y () + me_Step);                                      //�����ƶ����s_Y
    putimage ((int)gets_X (), (int)gets_Y (), &meteor_mask, SRCAND);   //������Ԫ��դ����ͼƬ��ʹ����ͼƬ��Χ�ڱ߿�͸��
    putimage ((int)gets_X (), (int)gets_Y (), &meteor, SRCPAINT);
    if(gets_X () >= 1080 || gets_Y () >= 720)                          //���������Χ�����»�ͼ
        InitShape (1);
}

Meteor::Meteor ()
{
    me_Step = 10;                                                      //����Ĭ�ϵĲ���Ϊ10
}

Meteor::~Meteor ()
{
}