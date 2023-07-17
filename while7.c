// write a prograem to print following pattern
// 0 1 3 6 10 15 21 28 36 45 55 ........ 1000

#include <stdio.h>
void main()
{
    int num1 = 1, num2 = 1, ans = 0;

    ans = num1 - num2;
    printf(" %d", ans);

    ans = ans + num1;
    printf(" %d", ans);

    while(ans < 990)
    {
        num1 = num1 + num2;
        ans = ans + num1;
        printf(" %d", ans);
    }
}

//     num1 = num1 + num2;
//     ans = ans + num1;
//     printf(" %d", ans);

//     num1 = num1 + num2;
//     ans = ans + num1;
//     printf(" %d", ans);

//     num1 = num1 + num2;
//     ans = ans + num1;
//     printf(" %d", ans);

//     num1 = num1 + num2;
//     ans = ans + num1;
//     printf(" %d", ans);
// 