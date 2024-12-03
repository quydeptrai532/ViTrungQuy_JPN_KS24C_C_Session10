#include<stdio.h>

int main(){
	int number[]={1,3,5,2,4};
	int size=sizeof(number)/sizeof(int);
	printf("mang khi chua duoc sap xep:\n");
	for(int i=0;i<size;i++){
		printf("%d",number[i]);
	}
    for(int i=1;i<size;i++){
    	int key=number[i];
    	int j=i-1;
    	while(j>=0 && key<number[j]){
    		number[j+1]=number[j];
    		j--;
    		
		}
		number[j+1]=key;
	}
	printf("\n mang sau khi  duoc sap xep:\n");
	for(int i=0;i<size;i++){
		printf("%d",number[i]);
	}
	return 0;
}
