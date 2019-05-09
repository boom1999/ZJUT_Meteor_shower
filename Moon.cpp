#include "Moon.h"

void Moon::InitShape (double x)
{
    int y = 700; int r = 30;                                      //Ĭ������Moon��y=700��ʼ,����뾶Ϊ30
    IMAGE moon; IMAGE moon_mask;                                  //��������ͼ��moon������ͼ�������ͼmoon_mask
    loadimage (&moon_mask, "moon_mask.jpg", 50, 50);              //��������ͼƬ������50*50�Ĵ�С����
    loadimage (&moon, "moon.jpg", 50, 50);                        //��������ͼƬ������ͼ������50*50�Ĵ�С����
    putimage ((int)x, (int)y, &moon_mask, SRCAND);                //������Ԫ��դ����ͼƬ�������ʹ����ͼƬ��Χ�ڱ߿�͸��
    putimage ((int)x, (int)y, &moon, SRCPAINT);
    setmembers (x, y, r);                                         //���β�x��y=700�Լ�r��moon.jpg��λ
}

void Moon::MoveShape ()
{
    IMAGE moon; IMAGE moon_mask;                                  //��������ͼ��moon������ͼ�������ͼmoon_mask
    loadimage (&moon_mask, "moon_mask.jpg", 50, 50);              //��������ͼƬ������50*50�Ĵ�С����
    loadimage (&moon, "moon.jpg", 50, 50);                        //��������ͼƬ������ͼ������50*50�Ĵ�С����
    sets_X (gets_X () + mo_Step + 1);                             //�����ƶ���������sh_X,s_Yֵ
    sets_Y (gets_Y () - (4 - sqrt (mo_Step)));
    if(gets_X () > 1080 || (gets_Y () - gets_R ()) < 0)
    {
        putimage ((int)gets_X (), (int)gets_Y (), &moon_mask, SRCAND);      //���ٽ�������Ե��λ�ñ��ֲ���
        putimage ((int)gets_X (), (int)gets_Y (), &moon, SRCPAINT);
        sets_X (gets_X () - mo_Step - 1);
        sets_Y (gets_Y () + (4 - sqrt (mo_Step)));
    }
    else
    {

        putimage ((int)gets_X (), (int)gets_Y (), &moon_mask, SRCAND);      //��Ԫ��դ�������
        putimage ((int)gets_X (), (int)gets_Y (), &moon, SRCPAINT);
    }
}

Moon::Moon ()
{
    mo_Step = 2;                                                  //Ĭ�����������Ĳ���mo_StepΪ2
}

Moon::~Moon ()
{
}