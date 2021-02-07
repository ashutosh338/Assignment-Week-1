#include<stdio.h>

void main()
{
    int N1,N2,add,sub,mul,rem;
    float div;


    printf("Enter any 2 Number to perform calculations:\n");
    scanf("%d%d", &N1, &N2);

    add= N1 + N2;
    sub=N2 - N1;
    mul=N1 * N2;
    div=N2/N1;
    rem=N2%N1;

    printf("Sum of 2 numbers is : %d\n", add);
    printf("Difference of 2 numbers is : %d\n", sub);
    printf("Multiplication of 2 numbers is : %d\n",mul);
    printf("Division of 2 numbers : %f\n", div);
    printf("Remainder: %d\n", rem);



}
