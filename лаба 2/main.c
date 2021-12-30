#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
double x, y;
printf("enter x:");
scanf("%lf", &x);
 if( x>= 0 && x < 2)
y = 1.0 / (1.0 + sin(x));

else if ( x >= 2 && x < 5 )
y = exp(2*x);

else if ( x >= 2 && x < 8 )
y = pow(2,x)+3*x-7;

else
y = 0.0;

system("cls");
printf("x = %lf", x);
 printf("\ny = %lf", y);
 return 0;
}
