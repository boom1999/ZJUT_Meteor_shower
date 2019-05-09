/****************************************************
 * 程序名称：天上的流星和月亮_大作业				*
 * 编译环境：Microsoft Visual Studio 2019           *
 *			 EasyX_20190415(beta)	                *
 * 作　　者：通信工程1803	凌智城    201806061211	*
 * 最后修改：2019/05/08								*
 ****************************************************/

#include"Sky.h"
int main ()
{
    Sky mysky (1080, 720);                             //创建mysky对象，并将产生1080*720的绘图空间
    IMAGE sky;                                         //导入背景图sky.jpg并以1080*720的大小缩放
    loadimage (&sky, "sky.jpg", 1080, 720);
    putimage (0, 0, &sky);                             //在0，0原点处放置图片
    BeginBatchDraw ();                                 //开始准备批量刷新绘图
    mysky.moon1->InitShape (1);                        //初始化moon
    mysky.meteor1->InitShape (1);                      //初始化四个meteor
    mysky.meteor2->InitShape (1);
    mysky.meteor3->InitShape (1);
    mysky.meteor4->InitShape (1);
    FlushBatchDraw ();                                 //刷新一次将最初始的图片绘出
    for(int i = 0; i < MAXSHAPE; i++)                  //在四块区域分别批量绘图，且每次都刷新一次背景
    {
        mysky.star1[ i ].InitShape (0);
        mysky.star2[ i ].InitShape (270);
        mysky.star3[ i ].InitShape (540);
        mysky.star4[ i ].InitShape (810);
        FlushBatchDraw ();
        putimage (0, 0, &sky);
    }
    while(!_kbhit ())                                   //当没有操作时一直延续
    {
        for(int i = 0; i < MAXSHAPE; i++)               //移动四块区域产生的每一个星星
        {
            mysky.star1[ i ].MoveShape ();
            mysky.star2[ i ].MoveShape ();
            mysky.star3[ i ].MoveShape ();
            mysky.star4[ i ].MoveShape ();
        }
        mysky.moon1->MoveShape ();                      //移动月亮moon
        mysky.meteor1->MoveShape ();                    //移动四个流星meteor
        mysky.meteor2->MoveShape ();
        mysky.meteor3->MoveShape ();
        mysky.meteor4->MoveShape ();
        FlushBatchDraw ();                              //再次刷新输出
        putimage (0, 0, &sky);                          //刷新一次背景图片
        Sleep (1);                                      //延时1
    }
    EndBatchDraw ();                                    //刷新结束批量绘图
    closegraph ();                                      //结束绘图
    cout << "THANKS" << endl;
    return 0;
}