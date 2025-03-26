#include <stdio.h> // input output
#include "temperature.h" // include declarations

float celsius_to_fahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0; // formula c to f
}

float fahrenheit_to_celsius(float fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0; // formula f to c
}

float celsius_to_kelvin(float celsius) {
    return celsius + 273.15; // formula c to k
}

float kelvin_to_celsius(float kelvin) {
    return kelvin - 273.15; // formula k to c
}

float fahrenheit_to_kelvin(float fahrenheit) {
    return celsius_to_kelvin(fahrenheit_to_celsius(fahrenheit)); // f to k through c
}

float kelvin_to_fahrenheit(float kelvin) {
    return celsius_to_fahrenheit(kelvin_to_celsius(kelvin)); // k to f through c
}

void categorize_temperature(float celsius) {
    printf("Temperature category: "); // label

    if (celsius < 0) {
        printf("Freezing\nWeather advisory: Stay warm Wear heavy layers\n");
    } else if (celsius < 10) {
        printf("Cold\nWeather advisory: Wear a jacket\n");
    } else if (celsius < 25) {
        printf("Comfortable\nWeather advisory: You should feel comfortable\n");
    } else if (celsius < 35) {
        printf("Hot\nWeather advisory: Stay hydrated\n");
    } else {
        printf("Extreme Heat\nWeather advisory: Stay indoors and cool\n");
    }
}
