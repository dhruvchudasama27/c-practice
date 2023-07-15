// write a programe to findout how many days user given moth has you cannot use else if ladder you cannot use and or 
#include<stdio.h>
void main()
{
    int month = 0;
   
    
    printf("enter value of month");
    scanf("%d",&month);

    if (month > 0)
     {
          if (month <= 12)
          {
               if(month == 2)
               {
                    printf("it has 28-29 days ");
               }
               else
               {
                    if(month <= 7 )
                    {
                         //less than 7 
                         if(month % 2 == 0)
                         {
                              printf("it has 30 days ");
                         }
                         else
                         {
                              printf("it has 31 days ");
                         }
                    }
                    else
                    {
                         //greater than 7 
                         if(month % 2 != 0)
                         {
                              printf("it has 30 days ");
                         }
                         else
                         {
                              printf("it has 31 days ");
                         }
                    }
               }
          }
          else
          {
               printf("Invalid month ");
          }
     }
     else
     {
          printf("Invalid month ");
     }
}
    