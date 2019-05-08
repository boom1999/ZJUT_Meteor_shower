#include "Star.h"

void Star::InitShape (double x)
{
    double y; double r;                             //声明star的坐标sh_Y和半径sh_R
    y = rand () % 720;                              //随即设置坐标sh_Y
    r = 2.5;
    setmembers (x, y, r);                           //由传入的参数以及产生的随机数设置star的实际坐标
    setfillcolor (st_Color);                        //设置填充颜色  
    setcolor (BLACK);                               //设置绘图颜色为黑色
    fillcircle ((int)x, (int)y, r);                 //绘制一个圆并且填充颜色
}

void Star::MoveShape ()
{
    setfillcolor (BLACK);                           //将填充颜色设置为黑色
    clearcircle ((int)gets_X (), (int)gets_Y (), (int)gets_R ());	//清除当前圆的区域，并以black清除
    sets_X (gets_X () + st_Step);					//计算移动后的star的横坐标sh_X
    if(gets_X () > 1080)                            //如果星星从画布右侧飞出，则重新在画布最左侧生成一颗star
        InitShape (0);
    setfillcolor (st_Color);                        //重新将绘图的填充颜色设置为st_Color
    fillcircle ((int)gets_X (), (int)gets_Y (), (int)gets_R ());	//重新绘制star
}

Star::Star ()                                       //初始化star的颜色和步长
{
    st_Step = (rand () % 5000) / 1000.0 + 1;        //随机生成步长
    unsigned int k;
    k = 1 + (rand () % 256);
    st_Color = RGB (k / 5, k + 1, k - 1);           //根据随机产生的k产生RGB颜色
}

Star::~Star ()
{
}