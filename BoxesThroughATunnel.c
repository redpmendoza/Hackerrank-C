#include<stdio.h>
#include<stdlib.h>

// Create struct box
struct box{
    int length, width, height;
};

// Typedef the struct
typedef struct box box;

// Function get_volume prototype
int get_volume(box b);

// Function is_lower_than_max_height prototype
int is_lower_than_max_height(box b);

// Main
int main(){

    // Create n
    int n;

    // Get n
    scanf("%d", &n);

    // Create boxes
    box *boxes = malloc(n * sizeof(box));

    // Get length, width, and height
    for(int ctr = 0; ctr < n; ctr++){
        scanf("%d %d %d", &boxes[ctr].length, &boxes[ctr].width, &boxes[ctr].height);
    }

    // Output volume of boxes that can fit
    for(int ctr = 0; ctr < n; ctr++){
        if(is_lower_than_max_height(boxes[ctr])){
            printf("%d\n", get_volume(boxes[ctr]));
        }
    }
}

// Function get_volume definition
int get_volume(box b){
    return b.length * b.width * b.height;
}

// Function is_lower_than_max_height definition
int is_lower_than_max_height(box b){
    return (b.height < 41);
}