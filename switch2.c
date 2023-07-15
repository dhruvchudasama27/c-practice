// write a progerame to print name of days on given number 
#include<stdio.h>
void main()
{
    int day = 0;
    printf(" enter value of day ");
    scanf("%d",&day);

    switch(day)
    {
        case 1:
        printf(" monday ");
        break;

        case 2:
        printf(" tuesday ");
        break;

        case 3:
        printf(" wednesday ");
        break;

        case 4:
        printf(" thurday ");
        break;

        case 5:
        printf(" friday ");
        break;

        case 6:
        printf(" saturday ");
        break;

        case 7:
        printf(" sunday ");
        break;

        default :
        printf(" invalid number ");
        break;
    }
}