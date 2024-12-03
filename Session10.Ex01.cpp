#include<stdio.h>

int main(){
	int number[]={1,2,3,4,5};
	int n;
	int size=sizeof(number)/sizeof(int);
	int flag=-1;
	printf("nhap phan tu can kiem tra\n");
	scanf("%d",&n);
	for(int i=0;i<size;i++){
		if(number[i]==n){
			flag=i;
			break;
		}
	}
	if(flag!=-1){
		printf("phan tu ton tai trong mang va nam o vi tri %d",flag);
	}
	else{printf("phan tu ko ton tai trong mang");
	}
	return 0;
}
