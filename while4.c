// write a programe to print following pattern
// 1 2 4 6 8 10 12 ........  8000
#include <stdio.h>
void main()
{
    int number = 1;

    printf(" %d", number);
    number = number + 1;
    printf(" %d", number);

    while(number < 8000)
    {
        number = number + 2;
        printf(" %d", number);
    }
    // number = number + 2;
    // printf(" %d", number);
    // number = number + 2;
    // printf(" %d", number);
    // number = number + 2;
    // printf(" %d", number);
}