#include <stdio.h>
#include <math.h>

double hypotenuse(double x, double y);

int main()
{
  double x;
  double y;
  double result;

  printf("Enter the sides of the triangle: ");
  scanf("%lf %lf", &x, &y);
  result = hypotenuse(x,y);
  printf("Hypotenuse: %.1f", result);
  return 0;
}

double hypotenuse(double x, double y) {
  return sqrt(pow(x,2) + pow(y,2));
}
