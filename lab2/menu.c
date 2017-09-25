#include <stdio.h>
#include <stdlib.h>

void Add()
{
    int a, b, addNumber;
    printf("Please input two numbers: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    addNumber = a + b;
    printf("The result is: %d\n", addNumber);
}
void Minus()
{
    int a, b, minusNumber;
    printf("Please input a minuend: \n");
    scanf("%d", &a);
    printf("Please input a subtrahend: \n");
    scanf("%d", &b);
    minusNumber = a - b;
    printf("The result is: %d\n", minusNumber);
}
void Mult()
{
    int a, b, multNumber;
    printf("Please input two numbers: \n");
    scanf("%d %d", &a, &b);
    multNumber = a * b;
    printf("The result is: %d\n", multNumber);
}
void Div()
{
    float a, b, divNumber;
    printf("Please input a dividend: \n");
    scanf("%f", &a);
    printf("Please input a divisor: \n");
    scanf("%f", &b);
    divNumber = a / b;
    printf("The result is: %f\n", divNumber);
}
void Comp()
{
    int a, b;
    printf("Please input two numbers: \n");
    scanf("%d %d", &a, &b);
    if(a > b)
    {
        printf("%d is biger\n", a);
    }
    else if(a == b)
    {
        printf("They are the same.\n");
    }
    else
    {
        printf("%d is bigger\n", b);
    }
}
void Quit()
{
    exit(0);
}        
void Help()
{
    printf("This is help cmd.\n");
}
void Sqr()
{
    int a;
    long sqrNumber;
    printf("Please input a number: \n");
    scanf("%d", &a);
    sqrNumber = a * a;
    printf("The result is: %ld\n", sqrNumber);
} 
int main()
{
    char cmd[128];
    while(1)
    {
        printf("Please input the cmd: \n");
        scanf("%s", cmd);
        if(strcmp(cmd, "Help") == 0)
        {
            Help();
        }
        else if(strcmp(cmd, "Add") == 0)
        {
            Add();
        }
        else if(strcmp(cmd, "Minus") == 0)
        {
            Minus();
        }
        else if(strcmp(cmd, "Mult") == 0)
        {
            Mult();
        }
        else if(strcmp(cmd, "Div") == 0)
        {
            Div();
        }
        else if(strcmp(cmd, "Comp") == 0)
        {
            Comp();
        }
        else if(strcmp(cmd, "Sqr") == 0)
        {
            Sqr();
        }
        else if(strcmp(cmd, "Quit") == 0)
        {
            Quit();
        }        
    }
}
