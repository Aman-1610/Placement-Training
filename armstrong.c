#include<stdio.h>
int main()
{
    int min=100,max=32767,temp,num,st;
    while (min<=max)
    {
        num=min;
        st=0;
        temp=num;
        int digitCount = 0;
        int n = temp;
        while (n > 0) 
        {
            digitCount++;
            n /= 10;
        }
        while(num>0)
            {
                int digit=num%10;
                //st=st+(temp*temp*temp);it is static for only 3digit number if the number is 4digit then we need to use one for loop here
                int power = 1;
                for (int i = 0; i < digitCount; i++) 
                    {
                        power *= digit;
                    }
                st += power;
                num=num/10;
            }
            if(min==st)
            {
                printf("%d\n",min);
            }
        min++;
    }
    return 0;
}