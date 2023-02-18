#include<stdio.h>
#include<stdlib.h>

// Create struct triangle
struct triangle{
    int a, b, c;
};

// Typedef the struct
typedef struct triangle triangle;

// Function check prototype
int check(struct triangle t);

// Function sort_by_area prototype
void sort_by_area(triangle *t, int n);

// Main
int main(){

    // Create n
    int n;

    // Get n
    scanf("%d", &n);

    // Create t
    triangle *t = malloc(n * sizeof(triangle));

    // Get a, b, c per t
    for(int ctr = 0; ctr < n; ctr++){
        scanf("%d%d%d", &t[ctr].a, &t[ctr].b, &t[ctr].c);
    }  
    
    // Sort t
    sort_by_area(t, n);

    // Output sorted t
    for(int ctr = 0; ctr < n; ctr++){
            printf("%d %d %d\n", t[ctr].a, t[ctr].b, t[ctr].c);
    }
}

// Function check definition
int check(struct triangle t){
    int a = t.a;
    int b = t.b;
    int c = t.c;

    return (a + b + c) * (a + b - c) * (a - b + c) * (-a + b + c);
}

// Function sort_by_are definition
void sort_by_area(triangle *t, int n){
    for(int ctr = 0; ctr < n; ctr++){
        for(int ctr2 = ctr + 1; ctr2 < n; ctr2++){
            if(check(t[ctr]) > check(t[ctr2])){
                struct triangle temp = t[ctr];

                t[ctr] = t[ctr2];
                t[ctr2] = temp;
            }
        }
    }
}