#include <stdio.h>

int main(){
    // Declare variables
    float temperature, convertedTemperature;
    int conversionType;

    // Display menu
    printf("Temperature Conversion Program\n 1. Celsius to Fahrenheit\n 2. Celsius to Kelvin\n 3. Fahrenheit to Celsius\n 4. Fahrenheit to Kelvin\n 5. Kelvin to Celsius\n 6. Kelvin to Fahrenheit\n Enter your choice (1-6): \n\n");
    scanf(" %d\n", &conversionType);

    // Get temperature input
    printf(" Enter temperature value: \n\n");
    scanf(" %f\n", &temperature);

    // Perform conversion based on user's choice
    switch (conversionType) {
        // Celsius to Fahrenheit
        case 1:
            convertedTemperature =  (temperature * 9 / 5) + 32;
            printf(" %.2f Celsius is equals to %.2f Fahrenheit\n", temperature, convertedTemperature);
            break;
        // Celsius to Kelvin
        case 2:
            convertedTemperature = temperature + 273.15;
            printf(" %.2f Celsius is equals to %.2f Kelvin\n", temperature, convertedTemperature);
            break;
        // Fahrenheit to Celsius
        case 3:
            convertedTemperature =  (temperature - 32) * 5 / 9;
            printf(" %.2f Fahrenheit is equals to %.2f Celsius\n", temperature, convertedTemperature);
            break;
        // Fahrenheit to Kelvin
        case 4:
            convertedTemperature =  (temperature + 459.67) * 5 / 9;
            printf(" %.2f Fahrenheit is equals to %.2f Kelvin\n", temperature, convertedTemperature);
            break;
        // Kelvin to Celsius
        case 5:
            convertedTemperature = temperature - 273.15;
            printf(" %.2f Kelvin is equals to %.2f Celsius\n", temperature, convertedTemperature);
            break;
        // Kelvin to Fahrenheit
        case 6:
            convertedTemperature =  (temperature * 9 / 5) - 459.67;
            printf(" %.2f Kelvin is equals to %.2f Fahrenheit\n", temperature, convertedTemperature);
            break;
        // Default Message
        default:
            printf(" Invalid choice. Please enter a number between 1 and 6.\n");
        break;
    }

    return 0;
}