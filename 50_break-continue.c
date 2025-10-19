// Program name: break and continue statement

#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        if (i % 3 == 0)
        {
            continue; // bypas
        }
        if (i == 8)
        {
            break; // loop terminate
        }
        printf("%d\n", i);
    }

    return 0;
}