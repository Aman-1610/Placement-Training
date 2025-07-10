#include<stdio.h>
int main()
{
    int size,i,va,sp;
    printf("enter the size of an array: ");
    scanf("%d",&size);
    int arr1[size];
    for(i=0;i<size;i++)
    {
        printf("value= ");
        scanf("%d",&arr1[i]);
    }
    printf("enter the specific position where you want to insert element: ");
    scanf("%d",&sp);
    printf("enter the value: ");
    scanf("%d",&va);
    arr1[sp]=va;
    printf("updated value:  ");
    for(i=0;i<size;i++)
    {
        printf("%d\n",arr1[i]);
    }
    
    return 0;
}