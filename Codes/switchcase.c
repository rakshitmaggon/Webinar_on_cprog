#include<stdio.h>
//SWITCH CASE
int main()
{
    int num;
    printf("Enter the input :");
    scanf("%d",&num);
    switch(num)
    {
    case 1:
        printf("one");
        break;
    case 2:
        printf("two");
        break;
    case 3:
        printf("Three");
        break;
    default:
        printf("Invalid input ");
    }
    return 0;
}
