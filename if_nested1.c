#include<stdio.h>
void main()
{
    int monthly_income = 0;
    int yearly_income = 0;
    float tax_rate = 0 ;
    float income_tax = 0;
    float gross_income = 0;

    printf(" enter value of monthly income");
    scanf("%d",&monthly_income);

    if( monthly_income<=0)
    {
        printf(" monthly income cannot be zero or less than zero");
    }
    else 
    {
        yearly_income = monthly_income * 12;
    printf(" yearly income is %d",yearly_income);

    if(yearly_income < 300000)
    {
        tax_rate = 5;
    }
    else if(yearly_income >=300000 && yearly_income <500000)
    {
        tax_rate = 10;
    }
    else if (yearly_income >=500000 && yearly_income <800000)
    {
        tax_rate = 20;
    }
    else if(yearly_income >=800000)
    {
        tax_rate = 30;
    }
    printf("\n the value of tax rate is %f",tax_rate);

    income_tax = yearly_income*tax_rate/100;
    printf("\n the value of income tax is %f",income_tax);
    gross_income=yearly_income-income_tax;
    printf("\n the value of gross income is %f",gross_income);
    }

}