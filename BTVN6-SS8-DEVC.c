#include <stdio.h>
int main()
{
    int i,num;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &num);
    int arr[num];
    for (i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        printf("arr[%d]=", i);
        scanf("%d", &arr[i]);
    }
    printf("nhap gia tri:\n ");
    int index;
    scanf("%d", &index);
    for (i = index; i < (sizeof(arr) / sizeof(int))-1; i++)
    {
        arr[i] = arr[i+1];
    }

    for (i = 0; i < (sizeof(arr) / sizeof(int))-1; i++)
    {
        printf("arr[%d]= %d\n", i, arr[i]);
    }
}
