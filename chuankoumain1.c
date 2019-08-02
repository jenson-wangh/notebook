#include <reg51.h>  //选用晶振11.0592MHz
unsigned char k=0;  //k表示正反转次数
sbit X0=P3^2;     //调节按钮
sbit X1=P1^1;     //上限位接近开关信号
sbit X2=P1^2;     //下限位接近开关信号
sbit Y1=P0^0;     //电机上升(注意:我使用的是管脚输出为0时候，电机运动，这样可以避免启动时候，单片机自复位对电机点动的影响)
sbit Y2=P0^1;     //电机下降
void delay50ms(unsigned int i)
{ 
  unsigned int j;
  for (i;i>0;i--)
    for(j=46078;j>0;j--);
}
main()
{
   IT0=1;       //下降沿触发
   EX0=1;       //开P3.2外部中断
   EA=1;        //总中断开  
   while(1)
   while(k)
   {
      Y1=0;        //正转
      while(X1==1);       //等待正转接近开关反应
      Y1=1;          //正转停
      delay50ms(1);     //停止时间50ms
      Y2=0;     //反转
      while(X2==1);     //等待反转接近开关反应
      Y2=1;    //反转停
      k--;     //圈数减一   
   }
}
void  counter0(void) interrupt 0
{
   k++;     //外部中断控制圈数加一
   //这个位置可以加你显示程序
}