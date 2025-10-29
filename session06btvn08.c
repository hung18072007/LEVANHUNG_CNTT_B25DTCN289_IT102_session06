#include<stdio.h>

int main(){
	int a,b,x,y,temp;
	printf("Moi ban nhap so a:");
	scanf("%d",&a);
	printf("Moi ban nhap so b:");
	scanf("%d",&b);
	x=a;
	y=b;
	while(b!=0){
		temp=a%b;
		a=b;
		b=temp;
	}
    int bcnn=(x*y)/a;
    printf("boi chung cua hai so la:%d ",bcnn);
}

