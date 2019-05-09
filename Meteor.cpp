#include "Meteor.h"

void Meteor::InitShape (double x)
{
    IMAGE meteor; IMAGE meteor_mask;                                   //声明流星图像meteor，流星图像的掩码图meteor_mask
    loadimage (&meteor, "meteor.jpg", 50, 30);                         //导入流星图片，并以50*30的大小缩放
    loadimage (&meteor_mask, "meteor_mask.jpg", 50, 30);               //导入流星图片的掩码图，并以50*30的大小缩放
    sets_X (rand () % 1080);                                           //随机设置s_X
    sets_Y (rand () % 720);                                            //随即设置s_Y
    putimage ((int)gets_X (), (int)gets_Y (), &meteor_mask, SRCAND);   //利用三元光栅处理图片，使流星图片周围黑边框透明
    putimage ((int)gets_X (), (int)gets_Y (), &meteor, SRCPAINT);
}

void Meteor::MoveShape ()
{
    IMAGE meteor; IMAGE meteor_mask;                                   //声明流星图像meteor，流星图像的掩码图meteor_mask
    loadimage (&meteor, "meteor.jpg", 50, 30);                         //导入流星图片，并以50*30的大小缩放
    loadimage (&meteor_mask, "meteor_mask.jpg", 50, 30);               //导入流星图片的掩码图，并以50*30的大小缩放
    sets_X (gets_X () + 2.0 * me_Step);                                //设置移动后的s_X
    sets_Y (gets_Y () + me_Step);                                      //设置移动后的s_Y
    putimage ((int)gets_X (), (int)gets_Y (), &meteor_mask, SRCAND);   //利用三元光栅处理图片，使流星图片周围黑边框透明
    putimage ((int)gets_X (), (int)gets_Y (), &meteor, SRCPAINT);
    if(gets_X () >= 1080 || gets_Y () >= 720)                          //如果超出范围，重新绘图
        InitShape (1);
}

Meteor::Meteor ()
{
    me_Step = 10;                                                      //设置默认的步长为10
}

Meteor::~Meteor ()
{
}