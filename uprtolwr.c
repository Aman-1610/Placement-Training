#include <stdio.h>

int main()
{
    printf("ENter the size of the string: ");
    int size;
    scanf("%d",&size);
    char ch[size];
    printf("Enter the string: ");
    getchar();
    for(int i=0;i<size;i++)
    {
        ch[i]=getchar();
    }
    ch[size] = '\0';
    // int upper='A';
    // int upperz='Z';
    // int lowerz='z';
    // int lower='a';
    for(int i=0;i<size;i++)
    {
        if(ch[i]>='A'&&ch[i]<='Z')
        {
            ch[i]=ch[i]+32;
        }
        else if(ch[i]>='a'&&ch[i]<='z')
        {
            ch[i]=ch[i]-32;
        }
    }
for(int k=0;k<size;k++)
{
    printf("%c",ch[k]);
}
    return 0;
}