//  print this half pyramid
// *
// **
// ***
// ****
// *****
// ******

#include <stdio.h>
void main()
{
    int count = 0;
    int number = 1;
    int loki = 5;

    printf("*");
  
    while(loki>0 && loki<6)
    {
        
        printf("\n");
        number = number + 1;
        count = 0;
        loki = loki-1;
        while (count < number)
        {
            printf("*");
            count = count + 1;
        }
    }

    // printf("\n");
    // number = number + 1;
    // count = 0;

    // while (count < number)
    // {
    //     printf("*");
    //     count = count + 1;
    // }

    // printf("\n");
    // number = number + 1;
    // count = 0;

    // while (count < number)
    // {
    //     printf("*");
    //     count = count + 1;
    // }

    // printf("\n");
    // number = number + 1;
    // count = 0;

    // while (count < number)
    // {
    //     printf("*");
    //     count = count + 1;
    // }

    // printf("\n");
    // number = number + 1;
    // count = 0;

    // while (count < number)
    // {
    //     printf("*");
    //     count = count + 1;
    // }
}
