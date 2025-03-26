#ifndef __REPORT_H__ // header guard start
#define __REPORT_H__ // header guard continue

float celsius_to_fahrenheit(float celsius); // convert c to f
float fahrenheit_to_celsius(float fahrenheit); // convert f to c
float celsius_to_kelvin(float celsius); // convert c to k
float kelvin_to_celsius(float kelvin); // convert k to c

float fahrenheit_to_kelvin(float fahrenheit); // convert f to k
float kelvin_to_fahrenheit(float kelvin); // convert k to f
void categorize_temperature(float celsius); // describe weather category

#endif /* __REPORT_H__ */ // header guard end
