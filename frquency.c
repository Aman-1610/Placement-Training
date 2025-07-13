#include<stdio.h>
int main()
{
    int frequency=0,num;
    int countofone=0,countoftwo=0,countofthree=0,countoffour=0,countoffive=0,countofsix=0,countofseven=0,countofeight=0,countofnine=0,countofzero=0;
    printf("enter the number: ");
    scanf("%d",&num);
    while(num>0)
    {
        int temp=num%10;
        if(temp==1) countofone++;
        else if(temp==2) countoftwo++;
        else if(temp ==3) countofthree++;
        else if(temp==4) countoffour++;
        else if(temp==5) countoffive++;
        else if(temp==6) countofsix++;
        else if(temp==7) countofseven++;
        else if(temp==8) countofeight++;
        else if(temp==9) countofnine++;
        else if(temp==0) countofzero++;
        num=num/10;        
    }
    int max = (countofzero>countofone)?countofzero:countofone;
    max = (max>countoftwo)?max:countoftwo;
    max = (max>countofthree)?max:countofthree;
    max = (max>countoffour)?max:countoffour;
    max = (max>countoffive)?max:countoffive;
    max = (max>countofsix)?max:countofsix;
    max = (max>countofseven)?max:countofseven;
    max = (max>countofeight)?max:countofeight;
    max = (max>countofnine)?max:countofnine;
    printf("most frequent digit: %d",max);
    return 0;
}