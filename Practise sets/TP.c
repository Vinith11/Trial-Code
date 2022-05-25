#include<stdio.h>

float computeArea(float, float);
int main()
{
 float base, height, area;
 printf("Enter the base and height of the triangle:");
 scanf("%f%f", &base, &height);
 area = computeArea(base, height);
 printf("Area of the triangle is %.2f", area);
}
float computeArea(float b, float h)
{
 float res;
 res = 0.5 * b * h;
 return res;
}