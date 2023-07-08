// write a programe to display message " you have fever" if the temprature if above 100
#include<stdio.h>
void main()
{
    float temperature = 0;

    printf("the temperature is ");
    scanf("%f",&temperature);

    //  check
    if(temperature > 100)
    {
        printf(" you haev fever");
    }
}