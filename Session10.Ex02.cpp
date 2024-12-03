#include<stdio.h>

int main(){
	int number[]={5,4,2,3,1};
	int size=sizeof(number)/sizeof(int);
	printf("mang khi chua duoc sap xep:\n");
	for (int i=0;i<size;i++){
		printf("%d ",number[i]);
	}
	printf("mang sau khi duoc sap xep:\n");
	for(int i=0;i<size;i++){
		for(int j=0;j<size-1-i;j++){
			if(number[j]>number[j+1]){
				int temp=number[j];
				number[j]=number[j+1];
				number[j+1]=temp;
			}
		}
	}
	for(int i=0;i<size;i++){
		printf("%d ",number[i]);
		
	}
	return 0;
}
