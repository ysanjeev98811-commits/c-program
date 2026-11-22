#include <stdio.h>

// Define a structure to store information about a student
struct Student {
    int roll_no;          // Stores the student's roll number
    char name[50];        // Stores the student's name (character array)
    int m1;               // Marks for Subject 1
    int m2;               // Marks for Subject 2
    int m3;               // Marks for Subject 3
    int total;            // Sum of marks in all 3 subjects
    float percentage;     // Percentage of total marks
};

int main() {
    // Declare an array of structures to store up to 50 students
    struct Student s[50]; 
    int n, i;

    // Ask the user how many students to enter
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Loop to read details for each student
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Enter Roll No: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Subject 1 marks: ");
        scanf("%d", &s[i].m1);

        printf("Enter Subject 2 marks: ");
        scanf("%d", &s[i].m2);

        printf("Enter Subject 3 marks: ");
        scanf("%d", &s[i].m3);

        // Calculate the total marks
        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;

        // Calculate the percentage (divide total by 3)
        s[i].percentage = s[i].total / 3.0;
    }

    // Print the top border of the table
    printf("\n--------------------------------------------------------------------------\n");
    // Print the table column headers separated by tabs (\t)
    printf("Roll No\tName\tSubject: 1\tSubject: 2\tSubject: 3\tTotal\tPercentage\n");
    // Print the bottom border of the header
    printf("--------------------------------------------------------------------------\n");

    // Loop to print each student's data in row format
    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%d\t\t%d\t\t%d\t\t%d\t%.2f\n \n\n\n ",
               s[i].roll_no,
               s[i].name,
               s[i].m1,
               s[i].m2,
               s[i].m3,
               s[i].total,
               s[i].percentage);
    }

    return 0; // End of the program
}
