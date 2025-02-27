#include <stdio.h>

// Define the Student struct
struct Student {
    char name[50];
    int grades[3];
    float average;  // To store the average grade
};

// Function to calculate the average (pass-by-reference)

void calculateAverage(struct Student *student) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += student->grades[i];  // Add each grade to the sum
    }
    student->average = sum / 3.0;  // Calculate and update the average
}
#include <stdio.h>

// Assume struct and calculateAverage function are defined above

int main() {
    // Create and initialize an array of 3 students
    struct Student students[3] = {
        {"Andy", {85, 90, 78}, 0},
        {"Randy", {88, 76, 92}, 0},
        {"Sandy", {70, 80, 75}, 0}
    };

    // Call calculateAverage for each student
    for (int i = 0; i < 3; i++) {
        calculateAverage(&students[i]);  // Pass each student by reference
    }

    // Print student details
    for (int i = 0; i < 3; i++) {
        printf("Name: %s\n", students[i].name);  // Print student's name
        printf("Grades: %d, %d, %d\n", students[i].grades[0], students[i].grades[1], students[i].grades[2]);
        printf("Average: %.2f\n\n", students[i].average);  // Print average
    }

    return 0;
}
