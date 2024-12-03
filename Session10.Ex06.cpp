#include<stdio.h>

int main(){
	int number[]={1,5,3,4,5,6,7,8,5,10};
	int n,size=sizeof(number)/sizeof(int);
	int position[100];
	int count=0;
	printf("nhap phan tu can tim kiem trong mang\n");
	scanf("%d",&n);
	for(int i=0;i<size;i++){
			if(number[i]==n){
				
				
				position[count++] = i;
			}
			
		}
    if(count>0){
    	printf("phan tu %d duoc tim thay tai vi tri: ",n);
    	for(int i=0;i<count;i++){
    		printf("%d ",position[i]);
		}
	}
	return 0;
	}


