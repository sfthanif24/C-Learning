// Program Name: Time table of multiplication
#include <stdio.h>
int main()
{
    int i, num;

    while (1)
    {
        printf("Enter number (0 to exit): ");
        scanf("%d", &num);

        if (num == 0)
        {
            printf("Exiting program.\n");
            break;
        }

        for (i = 1; i <= 10; i++)
        {
            printf("%d * %d = %d \n", num, i, num * i);
        }
        printf("\n");
    }

    return 0;
}