#include <stdio.h>

int main()
{
    for (int number = 0; number < 100; ++number)
    {
        printf("%d - Iteration result %d\n", number, Iteration(number));
        printf("%d - Recursion result %d\n\n", number, Recursion(number));
    }
}

int Iteration(counter)
{
    int numberFibanacci1 = 1;
    int numberFibanacci2 = 1;
    int numberFibanacci3 = 1;
    for (int start = 0; start < counter; ++start)
    {
        numberFibanacci3 = numberFibanacci2 + numberFibanacci1;
        numberFibanacci1 = numberFibanacci2;
        numberFibanacci2 = numberFibanacci3;
    }
    return numberFibanacci3;
}

int Recursion(int counter)
{
    if (counter <= 0)
    {
        return 1;
    }
    else
    {
        return Recursion(counter - 1) + Recursion(counter - 2);
    }
}



