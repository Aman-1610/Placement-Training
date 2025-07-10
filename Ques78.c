#include<stdio.h>
int main()
{
    int size,i;
    printf("enter the size of an array: ");
    scanf("%d",&size);
    int arr1[size];
    int arr2[size];
    for(i=0;i<size;i++)
    {
        printf("value= ");
        scanf("%d",&arr1[i]);
    }
    printf("copying array element........\n ");
    for(i=0;i<size;i++)
    {
        arr2[i] =arr1[i];
    }
    printf("printing copied array: ");
    for(i=0;i<size;i++)
    {
        printf("%d\n",arr2[i]);
    }
    return 0;
}