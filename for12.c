// /first is c      second is a
//                 11
//             21  22
//         31  32  33
//     41  42  43  44
// 51  52  53  54  55

#include <stdio.h>
void main()
{
    int a, a1, c, d = 5;

    for (c = 1; c <= 5; c++)
    {
        for (a = 1; a <= d; a++)
        {
            
            {printf(" ");}
        }
        for (a1 = 1; a1 <= c; a1++)
        {
            if(c==5 || a1==1   )
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        d--;
        
    }
}