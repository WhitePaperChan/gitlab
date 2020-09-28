#include "calculator.h"

int Calculator::Add (int a, int b)
{
    return a + b;
}

int Calculator::Factorial (int a)
{
    if (a < 0)
    {
        throw "Number must be 0 or greater";
    }
    int r = 1;
    for (int i = 2; i <= a; i++){
        r = r * i;
    }
    return r;
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
