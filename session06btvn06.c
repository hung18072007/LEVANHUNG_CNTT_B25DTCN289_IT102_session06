#include<stdio.h>

int main(){
	int may_tinh;
	float a,b,tong,hieu,thuong,tich;
	printf("Moi ban nhap so a:");
	scanf("%f",&a);
	printf("Moi ban nhap so b:");
	scanf("%f",&b);
	printf("may tinh cua ban co cac chuc nang sau day moi ban chon\n");
	do{
	    printf("1:Tong 2 so\n");
	    printf("2:Hieu 2 so\n");
    	printf("3:Tich 2 so\n");
    	printf("4.Thuong 2 so\n");
	    printf("5:Thoat\n");
    	scanf("%d",&may_tinh);
    	switch(may_tinh){
	    	case 1:
	    	    tong=a+b;
			    printf("Tong 2 so bang:%.0f\n",tong);
			    break;
		    case 2:
			    hieu=a-b;
			    printf("Hieu cua 2 so bang:%.0f\n",hieu);
			    break;
		    case 3:
			    tich=a*b;
			    printf("Tich cua 2 so bang:%.0f\n",tich);
		     	break;
		    case 4:
		    	if(b==0){
		    		printf("Loi khong the chia cho 0\n");
			    } else{
			    	thuong=a/b;
			    	printf("Thuong cua 2 so bang:%.0f\n",thuong);
			    	break;
			    }
		    case 5:
		    	printf("Chuong trinh ket thuc");
		    	break;
		    default:
			    printf("Lua chon cua ban da sai");
    	}
    } while(may_tinh!=5);
}

