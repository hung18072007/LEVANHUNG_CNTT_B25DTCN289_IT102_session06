#include<stdio.h>

int main(){
	int a=99999999,b=99999999,c=99999999;
	int choice,min;
	do{
	printf("\n---------Menu----------\n");
	printf("1:Nhap 3 so\n");
	printf("2:Tong 3 so\n");
	printf("3:Trung binh cong 3 so\n");
	printf("4:So nho nhat\n");
	printf("5:So lon nhat\n");
	printf("6:Thoat\n");
	printf("Moi ban nhap lua chon cua ban (1-6):");
	scanf("%d",&choice);
	
	    switch(choice){
		    case 1:
			    printf("Moi ban nhap so a:\n");
			    scanf("%d",&a);
			    printf("Moi ban nhap so b:\n");
			    scanf("%d",&b);
			    printf("Moi ban nhap so c:\n");
			    scanf("%d",&c);
			    break;
	    	case 2:
	    		if(a==99999999||b==99999999||c==99999999){
	    			printf("Vui long nhap 3 so truoc\n");
				} else{
					printf("Tong cua 3 so la:%d\n",a+b+c);
				}
	    		break;
	    	case 3:
	    		if(a==99999999||b==99999999||c==99999999){
	    			printf("Vui long nhap 3 so truoc\n");
				} else{
					printf("Trung binh cong cua 3 so la:%.2f",(a+b+c)/3);
				}
				break;
			case 4:
				if(a==99999999||b==99999999||c==99999999){
					printf("Vui long nhap 3 so truoc\n");
				} else{
					int max=a;
					if(max>b){
						min =b;
						printf("So nho nhat la:&d",min);
					} else if(max>c){
						min=c;
						printf("So nho nhat la:%d",min);
					}
				}
				break;
			case 5:
				if(a==99999999||b==99999999||c==99999999){
					printf("Vui long nhap 3 so truoc\n");
				} else{
					int max=a;
					if(max<b){
						max=b;
						printf("So lon nhat la:%d",max);
					} else if(max<c){
						max=c;
						printf("So lon nhat la:%d",max);
					}
				}
				break;
			case 6:
				printf("Chuong trinh ket thuc\n");
				break;
			default:
				printf("Loi chuong trinh");
    	}
	}while(choice!=6);
}


