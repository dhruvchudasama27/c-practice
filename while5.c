// write a programe to print all odd number till 10000
#include <stdio.h>
void main()
{
    int number = 1;
    printf("%d", number);
    while(number<9999)
    {
        number = number + 2;
        printf(" %d", number);
    }

    // number = number + 2;
    // printf("% d", number);
}