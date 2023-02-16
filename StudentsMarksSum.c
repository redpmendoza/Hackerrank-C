#include<stdio.h>

// Function marks_summation prototype
int marks_summation(int *marks, int number_of_students, char gender);

// Main
int main(){

    // Create number of students, gender, and sum;
    int number_of_students;
    char gender;
    int sum;

    // Get number of students
    scanf("%d", &number_of_students);
    
    // Create marks
    int marks[number_of_students];

    // Get marks
    for(int ctr = 0; ctr < number_of_students; ctr++){
        scanf("%d", &marks[ctr]);
    }

    // Get gender
    scanf("\n");
    scanf("%c", &gender);

    // Get sum
    sum = marks_summation(marks, number_of_students, gender);

    // Output sum
    printf("%d", sum);
}

// Function marks_summation prototype
int marks_summation(int *marks, int number_of_students, char gender){
    
    // Create g for gender and sum
    int g;
    int sum = 0;

    // Check what gender to calculate sum
    if(gender == 'g'){
        g = 1;
    }
    else{
        g = 0;
    }

    // Get sum of marks of desired gender
    for(int ctr = 0; ctr < number_of_students; ctr++){
        if(g == 1){
            if(ctr % 2 == 1){
                sum += *(marks+ctr);
            }
        }
        if(g == 0){
            if(ctr % 2 == 0){
                sum += *(marks+ctr);
            }
        }
    }

    // Return sum
    return sum;
}