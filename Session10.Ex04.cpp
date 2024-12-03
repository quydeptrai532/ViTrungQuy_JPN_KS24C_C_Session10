#include<stdio.h>

int main(){
	int number[]={1,3,5,2,4};
	int size=sizeof(number)/sizeof(int);
	printf("mang khi chua duoc sap xep:\n");
	for(int i=0;i<size;i++){
		printf("%d",number[i]);
	}
	for(int i=0;i<size;i++){
		int min=number[i];
		for(int j=i+1;j<size;j++){
			if(number[j]<min){
		       min=number[j];
		       number[j]=number[i];
		       number[i]=min;
			}
		}
	}
	printf("\n mang sau khi  duoc sap xep:\n");
	for(int i=0;i<size;i++){
		printf("%d",number[i]);
	}
	return 0;
}
