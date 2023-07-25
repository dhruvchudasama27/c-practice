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
    int size = 0;

    printf("enter value of size ");
    scanf("%d",&size);

    for(count = 0; count< size; count++)
    {
        printf("*");
    }
    temp = size -3;
    for(flash = 0 ; flash < size-2 ; flash++)
    {
        printf("\n");
        printf("*");
        for(count = 0 ; count < temp ; count++)
        {
            printf(" ");
        }
        printf("*");
        temp--;
    }
    printf("\n");
    printf("*");
}