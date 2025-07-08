#include<stdio.h>
#include <stdbool.h>
int main()
{
    int age;
    float salary,loanAmtReq;
    bool existingLoan;
    //creditScore;
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter your salary: ");
    scanf("%f",&salary);
    printf("Enter Amount of loan required: ");
    scanf("%f",&loanAmtReq);
    printf("Do you have an existing loan: (0--> NO/1--> YES)");
    scanf("%d",&existingLoan);
    if(age>21&&age<60&&salary>=20000&&loanAmtReq<(20*salary)&&existingLoan==0)
    {
        printf("Eligible for loan\n");
    }
    else{
        printf("Not eligible for loan\n");
    }
    return 0;
}