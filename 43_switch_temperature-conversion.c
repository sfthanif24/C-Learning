// Program name: Temperature conversion

#include <stdio.h>
int main()
{
    float temperature, convertTemperature;

    printf("Temperature conversion menu\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahreiheit\n");

    int choice;
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
    {
        printf("Enter Fahrenheit temperature: ");
        scanf("%f, &temperature");
        convertTemperature = (temperature - 32) * 1.8;
        printf("Celsius temperature: %.2f\n", convertTemperature);
        break;
    }

    case 2:
    {
        printf("Enter Celsius temperature: ");
        scanf("%f", &temperature);
        convertTemperature = (temperature * 1.8) + 32;
        printf("Fahrenheit temperature: %.2f\n", convertTemperature);
        break;
    }

    default:
        printf("Not a valid choice!\n");
        break;
    }
}