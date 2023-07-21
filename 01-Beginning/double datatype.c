//This code converts the celcius to the fahrenheit. The conversion formula is F = C * 9.0/5.0 +32.

 #include <stdio.h>
int main(void) {
   
    double celcius_temp,fahrenheit_temp;
   
    printf("Please enter the temperature as a Celcius: ");
    scanf("%lf",&celcius_temp);
    
    fahrenheit_temp = celcius_temp * 9.0/5.0 +32.0;
   
    printf("%.1lf",fahrenheit_temp);
    
return 0;
}