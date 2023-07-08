// split 3 digit number 
#include<stdio.h>
void main()
{
    int number = 0;
    int first = 0, second = 0, third = 0;

    printf(" the value of number is");
    scanf("%d",&number);

    first = number/100;
    second = (number - (first*100))/10;
    third = number - (first*100) - (second*10);
    printf(" the value of first is %d \n value of second is %d \n value of third is %d",first,second,third);
}