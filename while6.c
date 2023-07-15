// write a programe to print following pattern
//  2 1 3 4 7 11 18 29 47 76 123 .... 300
#include <stdio.h>
void main()
{
    int number = 0;
    int ans = 0;

    ans = number + 2;
    printf(" %d", ans);

    number = ans - 1;
    printf(" %d", number);

    while(number < 199 && ans < 199)
    {
        ans = number + ans;
        printf(" %d", ans);

        number = number + ans;
        printf(" %d", number);
    }

    // ans = number + ans ;
    // printf("%d",ans);

    // number = number + ans ;
    // printf("%d",number);

    // ans = number + ans ;
    // printf("%d",ans);

    // number = number + ans ;
    // printf("%d",number);
}