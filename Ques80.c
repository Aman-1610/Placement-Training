#include<stdio.h>
int main()
{
    int size,i,positive=0,negative=0,zero=0;
    printf("enter the size of an array: ");
    scanf("%d",&size);
    int arr1[size];
    for(i=0;i<size;i++)
    {
        printf("value= ");
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<size;i++)
    {
        if(arr1[i]==0)
        {
            zero++;
        }
        else if(arr1[i]>0)
        {
            positive++;
        }
        else if(arr1[i]<0)
        {
            negative++;
        }
    }
    printf("positive numbers in an array is: %d\n",positive);
    printf("negative number in an array is: %d\n",negative);
    printf("zero number in an array is: %d\n",zero);
    return 0;
}