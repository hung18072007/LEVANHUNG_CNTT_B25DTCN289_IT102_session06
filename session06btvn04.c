#include<stdio.h>

int main(){
	int n,bang_cuu_chuong,i;
	printf("Moi ban nhap so n(1-10):");
	scanf("%d",&n);
	if(n<0||n>10){
		printf("So nay khong co bang cuu chuong");
	} else if(n>0&&n<10){
		for(i=1;i<=10;i++){
			bang_cuu_chuong=n*i;
			printf("%d*%d=%d\n",n,i,bang_cuu_chuong);		}
	}

}

