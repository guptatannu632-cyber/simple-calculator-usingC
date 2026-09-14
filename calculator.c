#include <stdio.h>
int main()
{
    int a,b,c;
    char ch;
    printf("enter first number:");
    scanf("%d", &a);
    printf("enter user choice to perform operation: ");
    scanf("  %c" , &ch);
    printf("enter second number:");
    scanf("%d" , &b);
    switch(ch)
    {
        case '+': c=a+b;
                 printf("%d" , c);
                 break;
        case '-': c=a-b;
                  printf("%d" , c);
                 break;
        case '*': c=a * b;
                  printf("%d" , c);
                  break;
        case'/': c= a/b;
                  printf("%d" , c);
                  break;
        default: printf("invalid operation");
 }
    return 0;
}