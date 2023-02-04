#include<stdio.h>

// Function max_of_four prototype
int max_of_four(int a, int b, int c, int d);

// Main
int main(){

    // Create a, b, c, and d
    int a, b, c, d;

    // Get a, b, c, and d
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    // Output max number
    printf("%d", max_of_four(a, b, c, d));
}

// max_of_four definition
int max_of_four(int a, int b, int c, int d){
    
    // Store variables to array
    int arr[] = {a, b, c, d};

    // Create max
    int max = arr[0];

    // Get max number
    for(int ctr = 1; ctr < 4; ctr++){     
        if(arr[ctr] > max){
            max = arr[ctr];
        }
    }

    // Return max
    return max;
}