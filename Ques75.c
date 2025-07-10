#include<stdio.h>
int main()
{
    int size,i,j,max,min;
    printf("Enter the size of an array: ");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++)
    {
        printf("value= ");
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        else if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("max= %d\n",max);
    printf("Min = %d\n",min);
    return 0;
}