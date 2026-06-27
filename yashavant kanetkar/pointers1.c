#include <stdio.h>

int main()
{
    double num, guess, previous;

    printf("Enter a number: ");
    scanf("%lf", &num);

    if (num < 0)
    {
        printf("Square root of a negative number is not possible.\n");
        return 1;
    }

    if (num == 0)
    {
        printf("Square root = 0\n");
        return 0;
    }

    guess = num;

    do
    {
        previous = guess;
        guess = (guess + num / guess) / 2.0;
    }
    while ((guess - previous > 0.000001) ||
           (previous - guess > 0.000001));

    printf("Square root = %.6lf\n", guess);

    return 0;
}