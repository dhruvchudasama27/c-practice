#include <stdio.h>
void main()
{
    int bat,flash,super,man=6;

    for(bat=1;bat<=man;bat++)
    {
        for(flash=man-bat;flash>0;flash--)
        {
            printf(" ");
        }
        for(super=1;super<=bat;super++)
        {
            printf("* ");
        }
        printf("\n");
    }
}