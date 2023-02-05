#include<stdio.h>
#include<stdlib.h>

// Function update prototype
void update(int *a, int *b);

// Main
int main(){

    // Create a and b
    int a, b;

    // Create pointer pa and pb
    int *pa = &a, *pb = &b;

    // Get a and b
    scanf("%d %d", &a, &b);

    // Call function update and pass pa and pb
    update(pa, pb);

    // Print sum and difference
    printf("%d\n%d", a, b);
}

// Function update prototype
void update(int *a, int *b){
    
    // Calculate sum and difference
    int sum = *a + *b;
    int diff = abs(*a - *b);

    // Change value of a and b
    *a = sum;
    *b = diff;
}