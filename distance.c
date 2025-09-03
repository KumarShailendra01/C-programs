#include <stdio.h>

int main() {
    float km, meters, feet, inches, centimeters;

    printf("Enter the distance between two cities in kilometers: ");
   
    scanf("%f", &km);

    
    meters = km * 1000; 
    centimeters= meters*100;
    feet = km * 3280.84;             
    inches = km * 39370.1;           

    
    printf("\nDistance in Meters: %.2f m\n", meters);
    printf("Distance in Centimeters: %.2f cm\n", centimeters);
    printf("Distance in Feet: %.2f ft\n", feet);
    printf("Distance in Inches: %.2f in\n", inches);

    return 0;
}

