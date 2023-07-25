// write a programe to print hollow inverted half pyramid
// ******
// *   *
// *  *
// * *
// **
// *

#include <stdio.h>
void main()
{
    int count = 0;
    int flash = 0;
    int temp = 3;
    for(count = 0; count< 6; count++)
    {
        printf("_");
    }

    for(flash = 0 ; flash < 4 ; flash++)
    {
        printf("\n");
        printf("_");
        for(count = 0 ; count < temp ; count++)
        {
            printf(" ");
        }
        printf("_");
        temp--;
    }
    printf("\n");
    printf("*");
}