// write a programe to store 5 match runs for 1 player find average and total

#include <stdio.h>
void main()
{
    int run[5];
    int count = 0;
    int ans = 0;
    float ave = 0;

    for (count = 0; count < 5; count++)
    {
        printf("enter runs of match %d ", count + 1);
        scanf("%d", &run[count]);
    }

    count = 0;
    while (count < 5)
    {
        printf("\nruns of match %d is %d", count + 1, run[count]);
        count++;
    }

    ans = 0;
    count = 0;
    do
    {

        ans = ans + run[count];
        count++;
    } while (count < 5);

    printf("\ntotal runs is %d", ans);

    ave = ans / 5;
    printf("\naverage is %.2f ", ave);
}