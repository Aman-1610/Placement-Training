#include<stdio.h>
int main()
{
    int num,digit,rev=0;
    printf("ENter your number: ");
    scanf("%d",&num);
    int temp=num;
    while(num>0)
    {
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    printf("reversed number of %d id %d",temp,rev);
    return 0;
}