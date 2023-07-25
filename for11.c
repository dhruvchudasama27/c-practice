//  first raw        second column

// 11  12  13  14  15
// 21  22  23  24
// 31  32  33
// 41  42
// 51

#include <stdio.h>
void main()

{
    int col1, col2, raw, temp = 6;

    for (raw = 1; raw <= 6; raw++)
    {
        for (col1 = 1; col1 <= raw; col1++)
        {
            printf(" ");
        }
        for (col2 = 1; col2 <= temp; col2++)
        {
            if(raw==1 || col2==1 || col2==temp)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        temp--;
    }
}