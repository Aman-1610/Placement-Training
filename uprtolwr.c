#include <stdio.h>

int main()
{
    char ch[]="aMaN";
    for(int i=0;i<6;i++)
    {
        if(ch[i]>=65&&ch[i]<91)
        {
            ch[i]=ch[i]+32;
        }
        else if(ch[i]>=97&&ch[i]<123)
        {
            ch[i]=ch[i]-32;
        }
    }
for(int k=0;k<6;k++)
{
    printf("%c",ch[k]);
}
    return 0;
}