// Program Name: Vowel Consonant Checker

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("%c is vowel\n", ch);
        break;

    default:
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            printf("%c is consonant\n", ch);
        }
        else
        {
            printf("Invalid input! please enter an alphabetic character. \n");
        }

        break;
    }

    return 0;
}