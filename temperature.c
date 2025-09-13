// this program takes input in celsius and displays temperature in fahrenheit
#include <stdio.h>
int main(){
     float fahrenheit , celsius;
     
     printf("Enter the Temperature in degree Celsius : ");
     scanf("%f", &celsius);
     
     fahrenheit = (celsius*9/5) + 32;
     printf("The temperature in degree Fahrenheit is : %.2f\n", fahrenheit);
     
     return 0;
}


