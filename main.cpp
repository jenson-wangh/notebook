//  1.Êù°‰ª∂Ê≥®ÈáäÁî®Ê≥ïÔºö
//#if condition
//  code1
//#else
//  code2
//#endif -----------------------------------------------------------
//#include<iostream>
//using namespace std;
//int main(int argc,char *argv[])
//{
//    int i=0;
//    #if i==1
//    cout<<"if!"<<endl;
//#elif i==0
//    cout<<"elif"<<endl;
//#else
//    cout<<"else"<<endl;
//    #endif
//	return 0;
//	}
//	2.numeric_limits∫Ø ˝∫Õ ˝æ›¿‡–Õ≥§∂»µƒ ‘—È 
//#include<iostream>  
////#include<string>  
////#include <limits>  
//using namespace std;  
//  
//int main()  
//{  
//    cout << "type: \t\t" << "************size**************"<< endl;  
//    cout << "bool: \t\t" << "À˘’º◊÷Ω⁄ ˝£∫" << sizeof(bool);  
//    cout << "\t◊Ó¥Û÷µ£∫" << (numeric_limits<bool>::max)();  
//    cout << "\t\t◊Ó–°÷µ£∫" << (numeric_limits<bool>::min)() << endl;  
//    cout << "char: \t\t" << "À˘’º◊÷Ω⁄ ˝£∫" << sizeof(char);  
//    cout << "\t◊Ó¥Û÷µ£∫" << (numeric_limits<char>::max)();  
//    cout << "\t\t◊Ó–°÷µ£∫" << (numeric_limits<char>::min)() << endl;  
//    cout << "signed char: \t" << "À˘’º◊÷Ω⁄ ˝£∫" << sizeof(signed char);  
//    cout << "\t◊Ó¥Û÷µ£∫" << (numeric_limits<signed char>::max)();  
//    cout << "\t\t◊Ó–°÷µ£∫" << (numeric_limits<signed char>::min)() << endl;  
//    cout << "unsigned char: \t" << "À˘’º◊÷Ω⁄ ˝£∫" << sizeof(unsigned char);  
//    cout << "\t◊Ó¥Û÷µ£∫" << (numeric_limits<unsigned char>::max)();  
//    cout << "\t\t◊Ó–°÷µ£∫" << (numeric_limits<unsigned char>::min)() << endl;  
//    cout << "wchar_t: \t" << "À˘’º◊÷Ω⁄ ˝£∫" << sizeof(wchar_t);  
//    cout << "\t◊Ó¥Û÷µ£∫" << (numeric_limits<wchar_t>::max)();  
//    cout << "\t\t◊Ó–°÷µ£∫" << (numeric_limits<wchar_t>::min)() << endl;  
//    cout << "short: \t\t" << "À˘’º◊÷Ω⁄ ˝£∫" << sizeof(short);  
//    cout << "\t◊Ó¥Û÷µ£∫" << (numeric_limits<short>::max)();  
//    cout << "\t\t◊Ó–°÷µ£∫" << (numeric_limits<short>::min)() << endl;  
//    cout << "int: \t\t" << "À˘’º◊÷Ω⁄ ˝£∫" << sizeof(int);  
//    cout << "\t◊Ó¥Û÷µ£∫" << (numeric_limits<int>::max)();  
//    cout << "\t◊Ó–°÷µ£∫" << (numeric_limits<int>::min)() << endl;  
//    cout << "unsigned: \t" << "À˘’º◊÷Ω⁄ ˝£∫" << sizeof(unsigned);  
//    cout << "\t◊Ó¥Û÷µ£∫" << (numeric_limits<unsigned>::max)();  
//    cout << "\t◊Ó–°÷µ£∫" << (numeric_limits<unsigned>::min)() << endl;  
//    cout << "long: \t\t" << "À˘’º◊÷Ω⁄ ˝£∫" << sizeof(long);  
//    cout << "\t◊Ó¥Û÷µ£∫" << (numeric_limits<long>::max)();  
//    cout << "\t◊Ó–°÷µ£∫" << (numeric_limits<long>::min)() << endl;  
//    cout << "unsigned long: \t" << "À˘’º◊÷Ω⁄ ˝£∫" << sizeof(unsigned long);  
//    cout << "\t◊Ó¥Û÷µ£∫" << (numeric_limits<unsigned long>::max)();  
//    cout << "\t◊Ó–°÷µ£∫" << (numeric_limits<unsigned long>::min)() << endl;  
//    cout << "double: \t" << "À˘’º◊÷Ω⁄ ˝£∫" << sizeof(double);  
//    cout << "\t◊Ó¥Û÷µ£∫" << (numeric_limits<double>::max)();  
//    cout << "\t◊Ó–°÷µ£∫" << (numeric_limits<double>::min)() << endl;  
//    cout << "long double: \t" << "À˘’º◊÷Ω⁄ ˝£∫" << sizeof(long double);  
//    cout << "\t◊Ó¥Û÷µ£∫" << (numeric_limits<long double>::max)();  
//    cout << "\t◊Ó–°÷µ£∫" << (numeric_limits<long double>::min)() << endl;  
//    cout << "float: \t\t" << "À˘’º◊÷Ω⁄ ˝£∫" << sizeof(float);  
//    cout << "\t◊Ó¥Û÷µ£∫" << (numeric_limits<float>::max)();  
//    cout << "\t◊Ó–°÷µ£∫" << (numeric_limits<float>::min)() << endl;  
//    cout << "size_t: \t" << "À˘’º◊÷Ω⁄ ˝£∫" << sizeof(size_t);  
//    cout << "\t◊Ó¥Û÷µ£∫" << (numeric_limits<size_t>::max)();  
//    cout << "\t◊Ó–°÷µ£∫" << (numeric_limits<size_t>::min)() << endl;  
//    cout << "string: \t" << "À˘’º◊÷Ω⁄ ˝£∫" << sizeof(string) << endl;  
//    // << "\t◊Ó¥Û÷µ£∫" << (numeric_limits<string>::max)() << "\t◊Ó–°÷µ£∫" << (numeric_limits<string>::min)() << endl;  
//    cout << "type: \t\t" << "************size**************"<< endl;  
//    return 0;  
//}
//	3.typedef”√∑®
//#include<iostream>
//using namespace::std;
//int main(int argc,char *argv[]) 
//{
//	typedef int zhengXing;
//	zhengXing a=3;
//	cout<<"a="<<a<<endl;
//	return 0;
//}
//	4.√∂æŸenum”√∑®
//	∏Ò Ω£∫enum √∂æŸ√˚{ 
//     ±Í ∂∑˚[=’˚–Õ≥£ ˝], 
//     ±Í ∂∑˚[=’˚–Õ≥£ ˝], 
//... 
//    ±Í ∂∑˚[=’˚–Õ≥£ ˝]
//} √∂æŸ±‰¡ø; 
//µ⁄“ª∏ˆ√˚≥∆µƒ÷µŒ™ 0£¨µ⁄∂˛∏ˆ√˚≥∆µƒ÷µŒ™ 1£¨µ⁄»˝∏ˆ√˚≥∆µƒ÷µŒ™ 2£¨“‘¥À¿‡Õ∆°£µ´ «£¨ƒ˙“≤ø…“‘∏¯√˚≥∆∏≥”Ë“ª∏ˆÃÿ ‚µƒ÷µ£¨÷ª–Ë“™ÃÌº”“ª∏ˆ≥ı º÷µº¥ø…°£
//ƒ¨»œ«Èøˆœ¬£¨√ø∏ˆ√˚≥∆∂ºª·±»À¸«∞√Ê“ª∏ˆ√˚≥∆¥Û 1°£ 
//-----------------------------------------------------------------------------
//#include<iostream>
//using namespace::std;
//int main(int argc,char *argv[]) 
//{
//	enum color{
//		red,blue=5,green,yellow=10
//	}apple=red;
//	color apple2=green;
//	cout<<"apple="<<apple<<endl;
//	cout<<"apple2="<<apple2<<endl;
//	return 0;
//} 
//	5.wchar_t”√∑®£¨◊÷∑˚¥Æªª–– ,¿‡–Õœﬁ∂®∑˚°£ 
//#include<iostream>
//using namespace::std;
//int main(int argc,char *argv[])
//{
//	wchar_t ch=L'C';		//  wchar_t
//	cout<<"ch="<<(wchar_t)ch<<"\tsizeof(ch)="<<sizeof(ch)<<endl;
//	string str="hello, \
//dear" ;							//string
//	cout<<"str="<<str<<endl;
//	volatile int i=9;			//volatile
//	cout<<"i="<<i<<endl;
//	int i2=3;
//	register int  miles;
//	int* p=&miles;
//	cout<<p<<endl;
//	return 0;
//}
//  define
//#include<iostream>
//using namespace::std;
//#define MIN(x,y) ((x)>(y)?(y):(x))
//int main(int argc,char *argv[])
//{
//   cout<<MIN(45,78)<<endl;
//   return 0;
//}
//  int to char
//#include<stdio.h>
//int main(int argc,char *argv[])
//{
//    char ch[4];
//    int number;
//    printf("%s","please input number=\n");
//    scanf("%d",&number);
//    int a,b,c,d;
//    a=number/1000;
//    b=number%1000/100;
//    c=number/10%10;
//    d=number%10;
//    ch[0]=a+48;
//    ch[1]=b+48;
//    ch[2]=c+48;
//    ch[3]=d+48;
//    int i;
//    for(i=0;i<sizeof(ch)/sizeof(ch[0]);i++){
//    printf("%c",ch[i]);
//    }
//    return 0;
//}
//  weiyunsuan
//#include<stdio.h>
//#include<limits.h>
//#define setbit(x,y) x|=(1<<y)
//int main(int argc,char *argv[])
//{
//    int num=0x1;
//    int num1=(num | 0x2);
//printf("%d",num1);
////    int i=3259;     // -------------- decade reset to 0
////    scanf("%d",&i);
////    i=i-i%100/10*10;
////    printf("%d",i);
//    return 0;
//}
//  strcpy
//#include<stdio.h>
//char* strcpy(char* strDestination,const char* strSource);
//int main(int argc,char* argv[])
//{
//    char ch1[]="hello world!";
//    printf("%s\n",ch1);
//    printf("%d",sizeof(ch1));
//    char ch2[sizeof(ch1)];
//    strcpy(ch2,ch1);
//    printf("%s",ch2);
//    return 0;
//}
//char* strcpy(char* strDestination,const char* strSource){
//    char* to=strDestination;
//   while(*strSource!='\0'){
//   *strDestination++=*strSource++;
//   }
//    return to;
//}
//  sizeof --byte alignment
//#include<stdio.h>
//struct A{
//    float f1;
//    int i1;
//    char c1;
//};
//struct B{
//    int i1;
//    char c1;
//};
//struct C{
//    char c1;
//};
//int main(int argc,char* argv[])
//{
//    printf("%d\n",sizeof(A));   // sizeof is 12
//    printf("%d\n",sizeof(B));   // sizeof is 8
//     printf("%d\n",sizeof(C));  // sizeof is 1
//    return 0;
//}
#include<stdio.h>
int CheckA(char A){
    int i=0,num=0;
    while(i++<8){
        if(A & 0x1<<i){
            num++;
        }
    }
    return num;
}
int CheckB(char B){
    int countX=0;
    while(B){
        ++countX;
        B=B & (B-1);
    }
    return countX;
}
int main(int argc,char* argv[])
{
    char c=0x64;
    printf("%d,A:%d,B:%d\n",c,CheckA(c),CheckB(c));
    return 0;
}
//  mainji he zhou chang
//#include<stdio.h>
//#define PI 3.14
//int main(int argc,char* argv[]){
//    int r=2;
//    double area=0.0,qirth=0.0;
//    printf("%s","input r=");
//    scanf("%d",&r);
//    if(r>0){
//        area=r*r*PI;
//        qirth=2*PI*r;
//        printf("area=%f\n",area);
//        printf("qirth=%f\n",qirth);
//    }else{
//        printf("%s","r < 0!!");
//        printf("%s","ccc");
//    }
//    return 0;
//}
//
//#include<stdio.h>
//int main(int argc,char* argv[])
//{
//    int a=29;
//    int b=54;
//    int c=a | b;
//    printf("%d\n",c);
//    return 0;
//}
