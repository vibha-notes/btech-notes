#include <stdio.h>

int sum(int a, int b)
{
    return (a + b);
}

int subtract(int a, int b)
{
    return (a - b);
}

int mul(int a, int b)
{
    return (a * b);
}


int div(int a, int b)
{
    return (a / b);
}

int main(void)
{
    int option;
    int result;
    int op1 = 120, op2 = 90;
    int (*p[4]) (int x, int y) = {sum, subtract, mul, div};

    while (1)
    {
        printf ("1 - add 2 - subtract 3 - Multiply 4 - Divide 5 - quit:");
        scanf ("%d", &option);
        if (option == 5)
            break;
        if (option >= 1 && option <= 4)
        {
            // To call one of those function pointers:
            result = p[option-1] (op1, op2); 
            printf ("Result is %d\n", result);
        }
    }
    return 0;
}