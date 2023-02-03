#include<stdio.h>

int main(){

    // Create variables for int and float
    int a, b;
    float c, d;

    // Get int and float  variables
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);

    // Output sum and difference
    printf("%d %d\n", (a+b), (a-b));
    printf("%.1f %.1f\n", (c+d), (c-d));
}
