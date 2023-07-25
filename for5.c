// print tis pyramid
// 1
// 12
// 1 3
// 1  4
// 12345

#include <stdio.h>
void main()
{
    int count = 0;
    int space = 0;
    int flash = 1;

    printf("1");
    printf("\n");
    for(count=0; count<5; count++)
    {
        flash = 2;
        printf("1");
        for(space=0; space<count; space++)
        {
            flash++;
            printf(" ");
        }
        printf("%d",flash);
        printf("\n");
    }
    for(count=1; count<8; count++)
    { 
        printf("%d",count);
    }

    
}