#include<stdio.h>
int main(){
	int n,i,addValue,addIndex,a,b;
	printf("Nhap vao so phan tu:");
	scanf("%d",&n); 
	int numbers[n];
	printf("Nhap vao cac gia tri cua phan tu:\n"); 
	for(i=0;i<n;i++){
		printf("numbers[%d]",i); 
		scanf("%d",&numbers[i]); 
	}printf("Nhap so muon thay:");
	scanf("%d",&addValue);
	printf("Nhap vi tri muon thay:");
	scanf("%d",&addIndex); 
	for(a=n-1;a>=addIndex-1;a--){
		numbers[a+1] = numbers[a];
		numbers[addIndex-1] = addValue;
	}printf("Mang sau khi chen:\n");
	for(i=0;i<n;i++){
		printf("numbers[%d]=%d\n",i,numbers[i]);
	}
} 
