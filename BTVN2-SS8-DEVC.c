#include<stdio.h>
int main(){
	int row,col,i,j,sum=0;
	printf("Nhap so hang, so cot:");
	scanf("%d %d",&row,&col);
	int numbers[row][col];
	printf("Nhap cac phan tu cua mang:\n"); 
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("phan tu numbers[%d, %d] la: ", i, j);
			scanf(" %d",&numbers[i][j]);
			printf("\n"); 
			if(numbers[i][j]%2==0){
				sum+=numbers[i][j];  
			} 
		}printf("tong cac so chan la: %d", sum);
	}
}
