#include<stdio.h>
void main ()
{
    int unit = 0;
    int price = 0;
    int bill_amount = 0;
    float intrest = 0;
    float total_amount =  0;

    printf("enter number of unit ");
    scanf("%d",&unit);

    if(unit<=100)
    {
        price = 1;
    }
    else if (unit > 100 && unit <= 200)
    {
        price = 2;
    }
    else if (unit > 200 && unit <= 300)
    {
        price = 3;
    }
    else if (unit> 300 && unit<=400)
    {
        price=4;
    }
    else if (unit> 400)
    {
        price = 5;
    }

    bill_amount = unit*price;

    intrest = bill_amount * 5 / 100;

    total_amount = bill_amount + intrest;
    printf("total amount is %f",total_amount);

}