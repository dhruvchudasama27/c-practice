// print this pyramid

// * * * * * *
//  * * * * *
//   * * * *
//    * * *
//     * *
//      *

#include <stdio.h>
void main()
{
    int a, b, c,d=6;
    for(c=1;c<=6;c++)
    {
        for (a = 1; a <= c; a++)
        {
            printf(" ");
        }
        for (b = 1; b <= d; b++)
        {
            printf("* ");
        }
        printf("\n");
        d--;
    }
}