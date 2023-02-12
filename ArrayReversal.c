#include<stdio.h>

int main(){

    // Create n
    int n;

    // Get n
    scanf("%d", &n);

    // Create arr and temp variables
    int arr[n];
    int temp[n];

    // Get values for arr
    for(int ctr = 0; ctr < n; ctr++){
        scanf("%d", &arr[ctr]);
    }
    
    // Get the reverse of arr and store in temp
    for(int ctr = 0; ctr < n; ctr++){
        int ind = (n - ctr) - 1;
        temp[ctr] = arr[ind];
    }

    // Store temp to arr and output value
    for(int ctr = 0; ctr < n; ctr++){
        arr[ctr] = temp[ctr];
        printf("%d ", arr[ctr]);
    }
}