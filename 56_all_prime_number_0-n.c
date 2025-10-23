#include <stdio.h>

int main()
{
    int n, i, isPrime, numberOfPrimenumbers = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Prime numbers between 0 and %d are:\n", n);

    for (int currentNumber = 0; currentNumber <= n; currentNumber++)
    {
        isPrime = 1;

        // 0 and 1 are not prime numbers
        if (currentNumber <= 1)
        {
            isPrime = 0;
        }
        else
        {
            // Check if currentNumber is prime
            for (i = 2; i <= currentNumber / 2; i++)
            {
                if (currentNumber % i == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime)
        {
            printf("%d \t", currentNumber);
            numberOfPrimenumbers++;

            // Print new line after every 10 numbers for better formatting
            if (numberOfPrimenumbers % 10 == 0)
            {
                printf("\n");
            }
        }
    }

    printf("\n\nTotal prime numbers between 0 and %d: %d\n", n, numberOfPrimenumbers);

    return 0;
}