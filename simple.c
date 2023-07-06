// findout simple interest
#include<stdio.h>
void main()
{
     int price = 0;
     float rate = 0;
     float number = 0;
     float ans = 0;

     printf("price is");
     scanf("%d",&price);

     printf("rate is");
     scanf("%f",&rate);

     printf("number is");
     scanf("%f",&number);

     ans = price * rate * number / 100;

     printf("\n ans is %f",ans);
}