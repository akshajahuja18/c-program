//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>

int main() {
    float radius, area, circumference;
    const float PI = 3.14159;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("\nArea of circle = %.2f", area);
    printf("\nCircumference of circle = %.2f", circumference);

    return 0;
}