// write a programe to print followint pattern
// 1 8 27 64 ....... 10000
#include <stdio.h>
void main()
{
    int n = 1 , ans = 0;

    while (ans < 9261)
    {
        ans = n * n * n;
        printf(" %d", ans);
        n = n + 1;
    }
    // ans = n * n * n;
    // printf("%d", ans);
    // n = n + 1;
    // ans = n * n * n;
    // printf("%d", ans);
    // n = n + 1 ans = n * n * n;
    // printf("%d", ans);
}