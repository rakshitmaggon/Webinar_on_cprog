#include<stdio.h>

 int factorial(int num)
 {
     if(num==1)
     {
         return 1;
     }
     else
     {
         return factorial(num-1)*num;
     }
 }

 int main()
 {
     int num=0,result=0;
     printf("Please enter the number ");
     scanf("%d",&num);
     result=factorial(num);
     printf("The factorial of %d is %d",num,result);
     return 0;
 }
