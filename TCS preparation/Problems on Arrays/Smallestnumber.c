#include<stdio.h>
int main()
{
    int size,min;
    printf("Enter the size of an array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements in an array: \n");
    for(int i=0;i<size;i++)
    {
        printf("value = ");
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(int i=1;i<size;i++)
    {
        min = (arr[i]<min)?arr[i]:min;
    }
    printf("Smallest number in an array: %d",min);
    return 0;
}