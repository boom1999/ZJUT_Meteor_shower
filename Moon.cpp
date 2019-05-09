#include "Moon.h"

void Moon::InitShape (double x)
{
    int y = 700; int r = 30;                                      //默认设置Moon从y=700开始,虚拟半径为30
    IMAGE moon; IMAGE moon_mask;                                  //声明流星图像moon，流星图像的掩码图moon_mask
    loadimage (&moon_mask, "moon_mask.jpg", 50, 50);              //导入月亮图片，并以50*50的大小缩放
    loadimage (&moon, "moon.jpg", 50, 50);                        //导入月亮图片的掩码图，并以50*50的大小缩放
    putimage ((int)x, (int)y, &moon_mask, SRCAND);                //利用三元光栅处理图片并输出，使流星图片周围黑边框透明
    putimage ((int)x, (int)y, &moon, SRCPAINT);
    setmembers (x, y, r);                                         //以形参x与y=700以及r给moon.jpg定位
}

void Moon::MoveShape ()
{
    IMAGE moon; IMAGE moon_mask;                                  //声明流星图像moon，流星图像的掩码图moon_mask
    loadimage (&moon_mask, "moon_mask.jpg", 50, 50);              //导入月亮图片，并以50*50的大小缩放
    loadimage (&moon, "moon.jpg", 50, 50);                        //导入月亮图片的掩码图，并以50*50的大小缩放
    sets_X (gets_X () + mo_Step + 1);                             //设置移动后月亮的sh_X,s_Y值
    sets_Y (gets_Y () - (4 - sqrt (mo_Step)));
    if(gets_X () > 1080 || (gets_Y () - gets_R ()) < 0)
    {
        putimage ((int)gets_X (), (int)gets_Y (), &moon_mask, SRCAND);      //在临近画布边缘的位置保持不变
        putimage ((int)gets_X (), (int)gets_Y (), &moon, SRCPAINT);
        sets_X (gets_X () - mo_Step - 1);
        sets_Y (gets_Y () + (4 - sqrt (mo_Step)));
    }
    else
    {

        putimage ((int)gets_X (), (int)gets_Y (), &moon_mask, SRCAND);      //三元光栅处理输出
        putimage ((int)gets_X (), (int)gets_Y (), &moon, SRCPAINT);
    }
}

Moon::Moon ()
{
    mo_Step = 2;                                                  //默认设置月亮的步长mo_Step为2
}

Moon::~Moon ()
{
}