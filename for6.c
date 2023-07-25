// print this full pyramid
// * * * * * *
//  * * * * *
//   * * * *
//    * * *
//     * *
//      *

#include <stdio.h>
void main()
{
    int bhide;
    int tapu;
    int pinku;
    int jetha = 6;

    for (bhide = 0; bhide <= jetha; bhide++)
    {
        for (pinku = 1; pinku <= bhide; pinku++)
        {
            printf(" ");
        }
        for (tapu = jetha - bhide; tapu > 0; tapu--)
        {
            printf("* ");
        }

        printf("\n");
    }
}