#include<stdio.h>
int main(){
	int a,i,updateIndex,updateValue,b;
	printf("Nhap vao cac phan tu:");
	scanf("%d",&a);
	int numbers[a];
	printf("Nhap vao cac gia tri phan tu:\n");
	for(i=0;i<a;i++){
		printf("numbers[%d]:",i);
		scanf("%d",&numbers[i]); 
	}printf("Nhap vi tri muon them:");
	scanf("%d",&updateIndex);
	printf("Nhap  so muon them:");
	scanf("%d",&updateValue);
	for (i=a;i>=0;i--){
		numbers[i] = numbers[i-1];
		if (i==updateIndex)
		numbers[i] = updateValue;
		break; 
	} 
	for (i=0;i<=a;i++) printf("%d ",numbers[i]);
} 
