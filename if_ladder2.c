// write a programe to print two digit number in words
// number= 10  ,, one zero
#include<stdio.h>
void main()
{
    int number = 0;
    int first = 0;
    int second = 0;

    printf("the number is ");
    scanf("%d",&number);

    first=number/10;
    // secnod=number-(first*10);
    second = number%10;

    if(first==1)
    {
        printf("one");
    }
    else if (first==2)
    {
        printf("two");
    }
    else if (first==3)
    {
        printf("three");
    }
    else if (first==4)
    {
        printf("four");
    }
    else if (first==5)
    {
        printf("five");
    }
    else if (first==6)
    {
        printf("six");
    }
    else if (first==7)
    {
        printf("seven");
    }
    else if (first==8)
    {
        printf("eight");
    }
    else if (first==9)
    {
        printf("nine");
    }
    else if (first==0)
    {
        printf("zero");
    }
    
    printf(" ");
    if(second==1)
    {
        printf("one");
    }
    else if (second==2)
    {
        printf("two");
    }
    else if (second==3)
    {
        printf("three");
    }
    else if (second==4)
    {
        printf("four");
    }
    else if (second==5)
    {
        printf("five");
    }
    else if (second==6)
    {
        printf("six");
    }
    else if (second==7)
    {
        printf("seven");
    }
    else if (second==8)
    {
        printf("eight");
    }
    else if (second==9)
    {
        printf("nine");
    }
    else if (second==0)
    {
        printf("zero");
    }


}