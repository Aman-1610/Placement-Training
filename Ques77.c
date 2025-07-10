#include<stdio.h>
int main()
{
    int size,i,left,right,temp;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++)
    {
        printf("value= ");
        scanf("%d",&arr[i]);
    }
    left=0;
    right=size-1;
    while(left<right)
    {
        temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        ++left;
        --right;
    }
    printf("Reversed array: ");
    for(i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}