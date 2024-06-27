include <stdio.h>

int main() {
// Write C code here
float celsius;
float fahrenheit;
printf("enter celsius value:");
scanf("%f", &celsius);
fahrenheit = (celsius*1.8)+32;
printf("%.3f celsius is equivalent to %.3f fahrenheit\n",celsius,fahrenheit);

return 0;
}
