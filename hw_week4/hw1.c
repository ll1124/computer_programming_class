#include <stdio.h>
#include <math.h>

double hypotenuse(double x, double y);

int main()
{
  double x;
  double y;
  double result;
  int count = 0;

  while (count < 3) {
    printf("Enter the sides of the triangle: ");
    scanf("%lf %lf", &x, &y);
    result = hypotenuse(x,y);
    printf("Hypotenuse: %.1f\n\n", result);
    count ++;
  }
  return 0;
}

double hypotenuse(double x, double y) {
  return sqrt(pow(x,2) + pow(y,2));
}
