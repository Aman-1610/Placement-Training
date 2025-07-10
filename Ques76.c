#include<stdio.h>
int main()
{
    int size,i,search,ch,temp;
    printf("enter the size of an array: ");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++)
    {
        printf("value= ");
        scanf("%d",&arr[i]);
    }
    printf("Enter the value which you want to search: ");
    scanf("%d",&search);
    for(i=0;i<size;i++)
    {
        if(search==arr[i])
        {
            printf("Element found at index %d. Do you want to update it? Press 1: ", i);
            scanf("%d",&ch);
            if(ch==1)
            {
                printf("enter new value= ");
                scanf("%d",&temp);
                arr[i]=temp;
            }
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;

}