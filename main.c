#include <stdio.h>

int main(void) {
    double x;
    double r = 4.0;
    double pi = 3.141592;
    double a;

    scanf("%lf", &x);
    a = x * 360.0 / (pi * r);
    printf("%f", a);

    return 0;
}