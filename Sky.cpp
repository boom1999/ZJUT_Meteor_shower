#include "Sky.h"

Sky::Sky ()
{
    srand ((unsigned)time (NULL));         //随机种子
    sky_X = 1080; sky_Y = 720;             //默认设置sky背景大小为1080*720
    initgraph (1080, 720);                 //创建绘图区域
}

Sky::Sky (int s_X, int s_Y)
{
    srand ((unsigned)time (NULL));         //随机种子
    sky_X = s_X;                           //以传入的形参设置sky背景的大小
    sky_Y = s_Y;
    initgraph (s_X, s_Y);                  //创建绘图区域
}

Sky::~Sky ()
{         
    delete meteor4;                         //删除动态申请的内存
    delete meteor3;
    delete meteor2;
    delete meteor1;
    delete moon1;
    delete[]star4;
    delete[]star3;
    delete[]star2;
    delete[]star1;
}