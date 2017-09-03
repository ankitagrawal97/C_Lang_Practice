#include<stdio.h>
void main(){
printf("%9d,%5d", 86, 1040); //prints after leaving few spaces

printf("\n------------\n");

printf("%12.5e", 30.253);

printf("\n------------\n");

printf("%.1f", 83.162); // Decimal ke baad sirf ek place tak print karega..

printf("\n------------\n");

printf("%-6.2g\n", .0000009979); // exponential form me.
float x,y;
int i;

scanf("%f%d%f", &x, &i, &y);
printf("Value of x %f\n", x);
printf("Value of i %d\n", i);
printf("Value of y %f\n", y);
}
