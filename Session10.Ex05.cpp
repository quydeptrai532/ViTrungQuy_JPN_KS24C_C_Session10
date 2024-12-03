#include<stdio.h>

int main(){
	int number[]={5,4,2,3,1};
	int size=sizeof(number)/sizeof(int);
	int search;
	int start=0;
	int end=size-1;
	int mid=(end+start)/2;
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
	printf("\n nhap vao so nguyen can tim kiem trong mang\n");
	scanf("%d",&search);
	while(start<=end){
		mid=(start+end)/2;
		if (number[mid]==search) {
			printf("phan tu can tim nam o vi tri %d",mid);
			return 0;
		}
		else { if(number[mid]<search){
			 start=mid+1;
		}
		else { end=mid-1;
		}
		}
	
	}
	printf("khong tim thay  phan tu can tim");
	return 0;
}
