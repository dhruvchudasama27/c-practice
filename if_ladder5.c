// write a programe to findout zodiac sign of user

#include<stdio.h>
void main()
{
    int month = 0, date = 0;

    printf(" your birth month ");
    scanf("%d",&month);
    printf(" your birth date ");
    scanf("%d",date);

    if(month==3 && date>=21 && date<=31 || month==4 && date<=19 && date>0)
    {
        printf(" your zodiac is aries ");
    }
}