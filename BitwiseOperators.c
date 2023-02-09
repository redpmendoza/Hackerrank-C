#include<stdio.h>

// Function calculate_the_maximum prototype
void calculate_the_maximum(int n, int k);

// Main
int main(){
    
    // Create n and k
    int n, k;

    // Get n and k
    scanf("%d %d", &n, &k);
    
    // Pass n and k to function
    calculate_the_maximum(n, k);
}

// Function calculate_the_maximum definition
void calculate_the_maximum(int n, int k){

    // Create variable to store maximum values of variables in operator and, or, and xor
    int and = 0, or = 0, xor = 0;

    // Loop to get maximum values in and, or, and xor
    for(int ctr = 1; ctr <= n; ctr++){
        for(int ctr2 = ctr + 1; ctr2 <= n; ctr2++){
            if(((ctr & ctr2) > and) && ((ctr & ctr2) < k)){
                and = ctr & ctr2;
            }
            if(((ctr | ctr2) > or) && ((ctr | ctr2) < k)){
                or = ctr | ctr2;
            }
            if(((ctr ^ ctr2) > xor) && ((ctr ^ ctr2) < k)){
                xor = ctr ^ ctr2;
            }
        }
    }   

    // Output results  
    printf("%d\n", and);
    printf("%d\n", or);
    printf("%d\n", xor);
}