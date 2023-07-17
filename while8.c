// write a programe to print following pattern
// 1 5 12 22 35 51 70 92 117 145 176 .... 3000
#include <stdio.h>
void main()
{
    int num2 = 1, num3 = 4;

    num2 = num2;
    printf(" %d", num2);

    while(num2<2882)
    {
        num2 = num2 + num3;
        printf(" %d", num2);

        num3 = num3 + 3;
    }

    //     num2 = num2 + num3;
    //     printf(" %d", num2);

    //     num3 = num3 + 3;

    //     num2 = num2 + num3;
    //     printf(" %d", num2);

    //     num3 = num3 + 3;

    //     num2 = num2 + num3;
    //     printf(" %d", num2);
    // 
}