// Program Name = Sum of digits
#include <stdio.h>
int main()
{
    int number, temp, reminder, sum = 0;
    printf("Enter number: ");
    scanf("%d", &number);

    temp = number;

    while (temp != 0)
    {
        reminder = temp % 10;
        sum = sum + reminder;
        temp = temp / 10;
    }
    printf("%d", sum);

}
