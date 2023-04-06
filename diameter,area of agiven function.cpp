#include <stdio.h>

float diameter(float radius);
float circumference(float radius);
float area(float radius);

int main() {
    float r;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    printf("Diameter = %f\n", diameter(r));
    printf("Circumference = %f\n", circumference(r));
    printf("Area = %f\n", area(r));

    return 0;
}

float diameter(float radius) {
    return 2 * radius;
}

float circumference(float radius) {
    return 2 * 3.141592 * radius;
}

float area(float radius) {
    return 3.141592 * radius * radius;
}

