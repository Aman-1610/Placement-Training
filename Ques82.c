#include<stdio.h>
int main()
{
    int size,i,j,temp;
    printf("enter the size of an array: ");
    scanf("%d",&size);
    int arr1[size];
    for(i=0;i<size;i++)
    {
        printf("value= ");
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-i-1;j++)
        {
            if(arr1[j]>arr1[j+1])
            {
                temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
    }
    printf("sorted value:  ");
    for(i=0;i<size;i++)
    {
        printf("%d\n",arr1[i]);
    }
    
    return 0;
}