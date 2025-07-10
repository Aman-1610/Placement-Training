#include<stdio.h>
int main()
{
    int size,i,even=0,odd=0;
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
        if(arr1[i]%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
    }
    printf("even numbers in an array is: %d\n",even);
    printf("odd number in an array is: %d",odd);
    return 0;
}