/****************************************************
 * �������ƣ����ϵ����Ǻ�����_����ҵ				*
 * ���뻷����Microsoft Visual Studio 2019           *
 *			 EasyX_20190415(beta)	                *
 * �������ߣ�ͨ�Ź���1803	���ǳ�    201806061211	*
 * ����޸ģ�2019/05/08								*
 ****************************************************/

#include"Sky.h"
int main ()
{
    Sky mysky (1080, 720);                             //����mysky���󣬲�������1080*720�Ļ�ͼ�ռ�
    IMAGE sky;                                         //���뱳��ͼsky.jpg����1080*720�Ĵ�С����
    loadimage (&sky, "sky.jpg", 1080, 720);
    putimage (0, 0, &sky);                             //��0��0ԭ�㴦����ͼƬ
    BeginBatchDraw ();                                 //��ʼ׼������ˢ�»�ͼ
    mysky.moon1->InitShape (1);                        //��ʼ��moon
    mysky.meteor1->InitShape (1);                      //��ʼ���ĸ�meteor
    mysky.meteor2->InitShape (1);
    mysky.meteor3->InitShape (1);
    mysky.meteor4->InitShape (1);
    FlushBatchDraw ();                                 //ˢ��һ�ν����ʼ��ͼƬ���
    for(int i = 0; i < MAXSHAPE; i++)                  //���Ŀ�����ֱ�������ͼ����ÿ�ζ�ˢ��һ�α���
    {
        mysky.star1[ i ].InitShape (0);
        mysky.star2[ i ].InitShape (270);
        mysky.star3[ i ].InitShape (540);
        mysky.star4[ i ].InitShape (810);
        FlushBatchDraw ();
        putimage (0, 0, &sky);
    }
    while(!_kbhit ())                                   //��û�в���ʱһֱ����
    {
        for(int i = 0; i < MAXSHAPE; i++)               //�ƶ��Ŀ����������ÿһ������
        {
            mysky.star1[ i ].MoveShape ();
            mysky.star2[ i ].MoveShape ();
            mysky.star3[ i ].MoveShape ();
            mysky.star4[ i ].MoveShape ();
        }
        mysky.moon1->MoveShape ();                      //�ƶ�����moon
        mysky.meteor1->MoveShape ();                    //�ƶ��ĸ�����meteor
        mysky.meteor2->MoveShape ();
        mysky.meteor3->MoveShape ();
        mysky.meteor4->MoveShape ();
        FlushBatchDraw ();                              //�ٴ�ˢ�����
        putimage (0, 0, &sky);                          //ˢ��һ�α���ͼƬ
        Sleep (1);                                      //��ʱ1
    }
    EndBatchDraw ();                                    //ˢ�½���������ͼ
    closegraph ();                                      //������ͼ
    cout << "THANKS" << endl;
    return 0;
}