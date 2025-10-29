#include<stdio.h>

int main(){
	int a,b,temp;
	printf("Moi ban nhap so a:");
	scanf("%d",&a);
	printf("Moi ban nhap so b:");
	scanf("%d",&b);
	while(b!=0){
		temp=a%b;
		a=b;
		b=temp;
		printf("Uoc chung lon nhat cua so do la:%d\n",a);
	}

}

