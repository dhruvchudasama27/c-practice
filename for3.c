// write a programe to print following pattern
// 1 6 15 28 45 66 91 120 ....... 10000
//  1 5 9 13 17 21 25 29 ......
//  1 4 4 4 4 4 4 4 4 4 .....

#include <stdio.h>
void main()
{
    int number = 1;
    int ans = 0;
    int temp = 5;

    printf(" %d", number);
    ans = number + temp;

    for(temp = 5 ; ans < 10000 ; ans = ans + temp )
    {
        printf(" %d", ans);
        temp = temp + 4;
        // ans = ans + temp;
    }

    //     printf(" %d",ans);
    //     temp = temp + 4;
    //     ans =ans + temp ;
    //     printf(" %d",ans);
    //     temp = temp + 4;
    //     ans =ans + temp ;
    //     printf(" %d",ans);
    //     temp = temp + 4;
    //     ans =ans + temp ;
    //     printf(" %d",ans);


}
