//  print this half pyramid
// 1
// 12
// 123
// 1234
// 12345
// 123456

#include <stdio.h>
void main()
{
    int count = 0;
    int number = 1;
    int loki = 6;

   
  
    while(loki>0 && loki<7)
    {
        
        printf("\n");
        number = number + 1;
        count = 1;
        loki = loki-1;
        while (count < number)
        {
            printf("%d",count);
            count = count + 1;
        }
    }

    
}
