//  print this inverted half pyramid
// ******
// *****
// ****
// ***
// **
// *

#include <stdio.h>
void main()

{
    int count = 0;
    int thor = 0;
    int hela = 6;
    while(thor<6)
    {
        while (count < hela)
        {
            printf("*");
            count = count + 1;
        }
       
        printf("\n");
       hela = hela - 1;
        count = 0;
        thor = thor+1;
    }
    // while (count < 5)
    // {
    //     printf("*");
    //     count = count + 1;
    // }
    // printf("\n");
    // count = 0;

    // while (count < 4)
    // {
    //     printf("*");
    //     count = count + 1;
    // }
    // printf("\n");
    // count = 0;
    // while (count < 3)
    // {
    //     printf("*");
    //     count = count + 1;
    // }
    // printf("\n");
    // count = 0;
    // while (count < 2)
    // {
    //     printf("*");
    //     count = count + 1;
    // }
    // printf("\n");
    // count = 0;
    // while (count < 1)
    // {
    //     printf("*");
    //     count = count + 1;
    // }
}