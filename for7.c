// print this pyramid
//      *
//     * *
//    * * *
//   * * * *
//  * * * * *
// * * * * * *

// (_____*****)

#include <stdio.h>
void main()
{
    int num1, num2, num3,num4=5;
    for(num3=1;num3<=6;num3++)
    {
        for (num1 = 1; num1 <= num4; num1++)
        {
            printf(" ");
        }
        for (num2 = 1; num2 <= num3; num2++)
        {
            printf("* ");
        }
        printf("\n");
        num4--;
    }
}