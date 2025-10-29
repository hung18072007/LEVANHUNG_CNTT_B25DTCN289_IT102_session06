#include<stdio.h>
#include<math.h>

int main(){
	int n,temp,soDao=0;
	printf("Moi ban nhap so n:");
	scanf("%d",&n);
	
	if(n<0){
		printf("n am chuyen dau tru len truoc n");
		n=-n;
	}
	if(n==0){
		printf("N bang 0");
	}
	temp=n;
	while(temp>0){
		soDao=soDao*10+(temp%10);
		temp/=10;
	}
	printf("Thu tu tu trai sang phai cua so la:",temp);
	while(soDao>0){
		int digit=soDao%10;
		printf(" %d ",digit);
		soDao/=10;
	}
	printf("\n");
}

