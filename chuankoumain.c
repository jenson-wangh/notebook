#include<reg52.h>
#include<stdio.h>
#define uchar unsigned char
#define uint unsigned int
unsigned char table1[8]={0x08,0x0c,0x04,0x06,0x02,0x03,0x01,0x09};//正转
unsigned char table2[8]={0x09,0x01,0x03,0x02,0x06,0x04,0x0c,0x08};//反转
unsigned char ch,step;
int t1,t2,a,b;
//init
void ckinit(){
    TMOD=0x20;   //0010 0000
    TH1=0xFD;//     1111 1101
    TL1=0xFD;   //设置波特率为9600
    TR1=1;  //启动定时器
    SCON=0x50; //0101 0000
    PCON=0x00;  //设置串口工作方式为1  0000 0000
}
//控制字符接收函数
void SCI_Rev(){     //串口接收数据
    uint i=0;
    while(RI){
        ch=SBUF;
        a=ch-96;
        b=ch-64;
        RI=0;
    }
}
//电机延迟函数
void delay(int n){
    int i,j;    //延时0.999ms*n 12MHZ晶振
    for(i=0;i<n;i++){
        for(j=0;j<120;j++);
    }
}
//电机正转函数
void forward1(){
    for(t1=512*a;t1>0;t1--){
        for(step=0;step<8;step++){
            P1=table1[step];
            delay(2);
            if(RI){
                t1=0;
            }
        }
    }
}
//电机反转函数
void backward1(){
    for(t2=512*b;t2>0;t2--){
        for(step=0;step<8;step++){
            P1=table2[step];
            delay(2);
            if(RI){
                t2=0;
            }
        }
    }
}
//电机停止函数
void stop(){
    P1=0xff;
    delay(100);
}
//主函数
void main(){
    ckinit();
    while(1){
        SCI_Rev();
        switch(ch){
        case 'a':
            forward1(); //正转一圈
            ch=0;
            break;
        case 'b':
            forward1();
            ch=0;
            break;
        case 'c':
            forward1();
            ch=0;
            break;
        case 'd':
            forward1();
            ch=0;
            break;
        case 'A':
            backward1();    //反转一圈
            ch=0;
            break;
        case 'B':
            backward1();
            ch=0;
            break;
        case 'C':
            backward1();
            ch=0;
            break;
        case 'D':
            backward1();
            ch=0;
            break;
        case '0':
            stop();
            break;
        default:
            break;
        }
        P1=0;
    }
}
