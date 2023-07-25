// print this pyramid

//      *
//     * *
//    *   *
//   *     *
//  *       *
// * * * * * *

#include <stdio.h>
void main()
{
    int e, f, g,h=5;
    for(g=1;g<=6;g++)
    {
        for (e = 1; e <= h; e++)
        {
            printf(" ");
        }
        for (f = 1; f <= g; f++)
        {
            printf("* ");
        }
        printf("\n");
        h--;
    }
}