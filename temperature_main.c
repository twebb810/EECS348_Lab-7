#include <stdio.h> // input output
#include "temperature.h" // conversion functions

int main(int argc, char *argv[]) {
    float temp_input temp_converted; // store values
    int from_scale to_scale; // scale choices

    printf("Enter the temperature: "); // prompt user
    if (scanf("%f", &temp_input) != 1) { // check number
        printf("Invalid input Exiting\n");
        return 1;
    }

    printf("Choose the current scale (1) Celsius (2) Fahrenheit (3) Kelvin: "); // prompt from
    scanf("%d", &from_scale);
    if (from_scale < 1 || from_scale > 3) { // check valid scale
        printf("Invalid scale selected\n");
        return 1;
    }

    printf("Convert to (1) Celsius (2) Fahrenheit (3) Kelvin: "); // prompt to
    scanf("%d", &to_scale);
    if (to_scale < 1 || to_scale > 3) {
        printf("Invalid target scale selected\n");
        return 1;
    }

    if (from_scale == to_scale) {
        printf("No conversion needed same scale selected\n");
        return 1;
    }

    if (from_scale == 3 && temp_input < 0) {
        printf("Invalid input Kelvin cannot be negative\n");
        return 1;
    }

    float temp_celsius;
    if (from_scale == 1)
        temp_celsius = temp_input;
    else if (from_scale == 2)
        temp_celsius = fahrenheit_to_celsius(temp_input);
    else
        temp_celsius = kelvin_to_celsius(temp_input);

    if (to_scale == 1)
        temp_converted = temp_celsius;
    else if (to_scale == 2)
        temp_converted = celsius_to_fahrenheit(temp_celsius);
    else
        temp_converted = celsius_to_kelvin(temp_celsius);

    const char *scale_names[] = {"", "Celsius", "Fahrenheit", "Kelvin"}; // labels
    printf("Converted temperature: %.2f %s\n", temp_converted, scale_names[to_scale]); // result

    categorize_temperature(temp_celsius); // weather label

    return 0;
}
