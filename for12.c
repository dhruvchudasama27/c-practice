//  first is raw     second is column
//                 11
//             21  22
//         31  32  33
//     41  42  43  44
// 51  52  53  54  55

#include <stdio.h>
void main()
{
    int raw, cal, cal2, a = 5,;

    for (raw = 0; raw <= 5; raw++)
    {
        for (cal = 0; cal < a; cal++)
        {
            printf(" ");
        }
        for (cal2 = 0; cal2 <= raw; cal2++)
        {
            if (raw == 5 || cal2==1   )
            {
                printf("* ");
            }
            
        }
        printf("\n");
        a--;
        b++;
        
    }
}

// int a, a1, c, d = 5;

// for (c = 1; c <= 5; c++)
// {
//     for (a = 1; a <= d; a++)
//     {

//         {printf(" ");}
//     }
//     for (a1 = 1; a1 <= c; a1++)
//     {

//         if(c==5 || a1==1  )
//         {
//             printf("* ");
//         }
//         else
//         {
//             printf(" ");
//         }
//     }
//     printf("\n");
//     d--;

// }