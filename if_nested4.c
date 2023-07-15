// write a programe to findout samllest out of given three variable without using and or and is ladder
#include <stdio.h>
void main()
{
    int number1, number2, number3;

    printf(" enter value of number1 ");
    scanf("%d", &number1);
    printf(" enter value of number2 ");
    scanf("%d", &number2);
    printf(" enter value of number3 ");
    scanf("%d", &number3);

    if (number1 == number2 && number2 == number3)
    {
        printf(" all are same ");
    }
    else
    {
        if (number1 < number2)
        {
            if (number1 < number3)
            {
                printf(" number 1 is samllest ");
            }
            else
            {
                printf(" number 3 is samllest ");
            }
        }
        else
        {
            if (number2 < number3)
            {
                printf("number 2 is smallest ");
            }
            else
            {
                printf(" number 3 is samllest ");
            }
        }
    }
}