// write a programe to create  a calc 
// addition
// substraction
// multiplication
// division
// modulus
// max 
// min 
// equality 

#include<stdio.h>
void main()
{
    int number1 = 0;
    int number2 = 0;
    int option = 0;
    int ans = 0;

    printf(" enter value of number1 ");
    scanf("%d",&number1);
    printf(" enetet value of number2 ");
    scanf("%d",&number2);

    printf("\n 1 for additoin ");
    printf("\n 2 for substriction ");
    printf("\n 3 for multiplication ");
    printf("\n 4 for division ");
    printf("\n 5 for modulus ");
    printf("\n 6 for max ");
    printf("\n 7 for min ");
    printf("\n 8 for equality ");
    printf("\n please select any one ");
    scanf("%d",&option);

    switch(option)
    {
        case 1:
        ans = number1 + number2;
        printf("ans is %d",ans);
        break;

        case 2:
        ans = number1 - number2;
        printf(" ans is %d",ans);
        break;

        case 3:
        ans = number1 * number2;
        printf(" ans is %d",ans);
        break;

        case 4:
        ans = number1 / number2;
        printf(" ans is %d",ans);
        break;

        case 5:
        ans = number1 % number2 ;
        printf(" ans is %d",ans);
        break;

        case 6:
        if(number1 > number2)
        {
            printf(" number1 is greter");
        }
        else if ( number2>number1)
        {
            printf(" number2 is greter");
        }
        break;

        case 7:
        if( number1 < number2)
        {
            printf(" number 1 is smaller ");
        }
        else if( number2 < number1)
        {
            printf(" number 2 is samller ");
        }
        break;

        case 8:
        if( number1 == number2)
        {
            printf(" both are same ");
        }
        else 
        {
            printf(" both are not same ");
        }
        break;
    }

}
