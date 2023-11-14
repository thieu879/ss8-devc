#include<stdio.h>
int main(){
	int a,i,sum=0;
	printf("Nhap vao so phan tu:");
	scanf("%d", &a);
	int numbers[a];
	printf("Nhap cac phan tu cua mang:\n"); 
	for(i=0;i<a;i++){
		printf("phan tu numbers[%d] la: ",i);
		scanf("%d",&numbers[i]); 
	}
	int findNumber;
	printf("Nhap vao so can tim kiem:");
	scanf("%d",&findNumber);
	for(i=0;i<a;i++){
		if(findNumber==numbers[i]){
		sum+=numbers[i];  
		}
	}printf("tong so tim kiem la: %d ", sum);
} 
