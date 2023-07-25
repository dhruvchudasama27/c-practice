// write a programe to print multiplication table of 5
// 5 x 1 = 5
// 5 x 2 = 10

#include <stdio.h>
void main()
{
    int table = 0;
    int multiplier = 1;
    int ans = 0;
    int flash = 0;
    printf(" enter value of table ");
    scanf(" %d", &table);

    for (flash = 0; flash < 5; flash++)

    {
        for (multiplier = 1; multiplier <= 10; multiplier++)
        {
            ans = table * multiplier;
            printf("\n%d x %d = %d ", table, multiplier, ans);
        }
        printf("\n");
        table = table + 1 ;
    }

    // printf("%d x %d = %d ", table, multiplier, ans);
    // printf("\n");
    // multiplier = multiplier + 1;
    // ans = ans + 5;

    // printf("%d x %d = %d ", table, multiplier, ans);
    // printf("\n");
    // multiplier = multiplier + 1;
    // ans = ans + 5;

    // printf("%d x %d = %d ", table, multiplier, ans);
    // printf("\n");
    // multiplier = multiplier + 1;
    // ans = ans + 5;

    // printf("%d x %d = %d ", table, multiplier, ans);
    // printf("\n");
    // multiplier = multiplier + 1;
    // ans = ans + 5;

    // printf("%d x %d = %d ", table, multiplier, ans);
    // printf("\n");
    // multiplier = multiplier + 1;
    // ans = ans + 5;

    // printf("%d x %d = %d ", table, multiplier, ans);
    // printf("\n");
    // multiplier = multiplier + 1;
    // ans = ans + 5;

    // printf("%d x %d = %d ", table, multiplier, ans);
    // printf("\n");
    // multiplier = multiplier + 1;
    // ans = ans + 5;

    // printf("%d x %d = %d ", table, multiplier, ans);
    // printf("\n");
    // multiplier = multiplier + 1;
    // ans = ans + 5;

    // printf("%d x %d = %d ", table, multiplier, ans);
    // printf("\n");
    // multiplier = multiplier + 1;
    // ans = ans + 5;
}