#include "Sky.h"

Sky::Sky ()
{
    srand ((unsigned)time (NULL));         //�������
    sky_X = 1080; sky_Y = 720;             //Ĭ������sky������СΪ1080*720
    initgraph (1080, 720);                 //������ͼ����
}

Sky::Sky (int s_X, int s_Y)
{
    srand ((unsigned)time (NULL));         //�������
    sky_X = s_X;                           //�Դ�����β�����sky�����Ĵ�С
    sky_Y = s_Y;
    initgraph (s_X, s_Y);                  //������ͼ����
}

Sky::~Sky ()
{         
    delete meteor4;                         //ɾ����̬������ڴ�
    delete meteor3;
    delete meteor2;
    delete meteor1;
    delete moon1;
    delete[]star4;
    delete[]star3;
    delete[]star2;
    delete[]star1;
}