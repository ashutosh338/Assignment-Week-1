#include <stdio.h>

void main()
   {
       int sub1,sub2,sub3,sub4,sub5;
       float per;

       printf("Enter marks in subject 1:");
       scanf("%d",&sub1);

       printf("Enter marks in subject 2:");
       scanf("%d",&sub2);

       printf("Enter marks in subject 3:");
       scanf("%d",&sub3);

       printf("Enter marks in subject 4:");
       scanf("%d",&sub4);

       printf("Enter marks in subject 5:");
       scanf("%d",&sub5);

       per=(sub1+sub2+sub3+sub4+sub5)/5;

       printf("Percentage:" "%f \n",per);

       if (per>=90)
          {
              printf("Grade A");

          }

        else if(per>=80)
        {
            printf("Grade B");
        }

        else if(per>=70)
        {
            printf("Grade C");
        }
        else if(per>=60)
        {
            printf("Grade D");
        }

        else if(per>=50)
        {
            printf("Grade E");
        }
        else if(per<40)
        {
            printf("Grade F");
        }

   }
