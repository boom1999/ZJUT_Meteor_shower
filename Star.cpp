#include "Star.h"

void Star::InitShape (double x)
{
    double y; double r;                             //����star������sh_Y�Ͱ뾶sh_R
    y = rand () % 720;                              //�漴��������sh_Y
    r = 2.5;
    setmembers (x, y, r);                           //�ɴ���Ĳ����Լ����������������star��ʵ������
    setfillcolor (st_Color);                        //���������ɫ  
    setcolor (BLACK);                               //���û�ͼ��ɫΪ��ɫ
    fillcircle ((int)x, (int)y, r);                 //����һ��Բ���������ɫ
}

void Star::MoveShape ()
{
    setfillcolor (BLACK);                           //�������ɫ����Ϊ��ɫ
    clearcircle ((int)gets_X (), (int)gets_Y (), (int)gets_R ());	//�����ǰԲ�����򣬲���black���
    sets_X (gets_X () + st_Step);					//�����ƶ����star�ĺ�����sh_X
    if(gets_X () > 1080)                            //������Ǵӻ����Ҳ�ɳ����������ڻ������������һ��star
        InitShape (0);
    setfillcolor (st_Color);                        //���½���ͼ�������ɫ����Ϊst_Color
    fillcircle ((int)gets_X (), (int)gets_Y (), (int)gets_R ());	//���»���star
}

Star::Star ()                                       //��ʼ��star����ɫ�Ͳ���
{
    st_Step = (rand () % 5000) / 1000.0 + 1;        //������ɲ���
    unsigned int k;
    k = 1 + (rand () % 256);
    st_Color = RGB (k / 5, k + 1, k - 1);           //�������������k����RGB��ɫ
}

Star::~Star ()
{
}