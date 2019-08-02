#include<reg52.h>
#include<stdio.h>
#define uint unsigned int
sbit led=P0^1;
uint i=0;
void main(){
	while(1){
			led=1;
			for(i=0;i<1000;i++);
			led =0;
			for(i=0;i<1000;i++);
	}
}