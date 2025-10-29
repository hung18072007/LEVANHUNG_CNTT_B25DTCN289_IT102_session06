#include<stdio.h>

int main(){
	int i,n,tong=0;
	printf("Moi ban nhap so n:");
	scanf("%d",&n);
	if(n<0){
		printf("Day khong phai la so nguyen duong\n");
	}
	
	for(i=1;i<=n;i++){
		tong=tong+i;
		
	}
    printf("Tong tat ca cac so tu 1 den n la:%d\n",tong);
}

