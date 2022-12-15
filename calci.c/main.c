#include<stdio.h>
int main()
{
    double a,b,result;
    char choice;

    printf("ENTER THE CHOICE (+,-,*,/):");
    scanf("%c",&choice);
    printf("ENTER THE FIRST NUMBER:");
    scanf("%lf",&a);
    printf("ENTER THE SECOND NUMBER:");
    scanf("%lf",&b);

    switch(choice)
    {
    case'+':
        result=a+b;
        break;
    case'-':
        result=a-b;
        break;
    case'*':
        result=a*b;
        break;
    case'/':
        result=a/b;
        break;
    default:
        printf("ERROR\n");
    }
    printf("RESULT:%lf%c%lf=%lf",a,choice,b,result);
    return 0;
}
