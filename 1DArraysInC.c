#include<stdio.h>
#include<stdlib.h>

int main(){

    // Create n
    int n;

    // Get n
    scanf("%d", &n);

    // Create a
    int *a = (int*)malloc(n * sizeof(int));

    // Create sum
    int sum = 0;

    // Get values in a and increment sum with values
    for(int ctr = 0; ctr < n; ctr++){
        scanf("%d", &a[ctr]);
        sum += a[ctr];
    }

    // Print sum
    printf("%d", sum);
    
    // Free a
    free(a);

}