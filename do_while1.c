// write a programe to findout factoial of given number
// 5 = 5*4*3*2*1  = 120

#include <stdio.h>
void main()
{
    int num = 0;
    int ans = 0;
    int count = 2;

    printf(" enter the value of number");
    scanf("%d", &num);

    ans = num * (num - 1);
    do
    {
        ans = ans * (num - count);
        count++;
    }while(count<num);

    printf(" value of answer is %d", ans);
}