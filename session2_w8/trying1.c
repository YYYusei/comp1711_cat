#include <stdio.h>
#define N_STUDENTS 10
#define N_MODULES 3

typedef struct {
    char name[50];
    int id;
    float gpa;
    int ProceduralProgramming;
    int IntroductionToProgramming;
    int OperatingSystems;
} Student;

// Function to extract the marks and store in a 2D array
void extractAndStore(Student students[], int extractedData[][N_MODULES]) {
    for (int i = 0; i < N_STUDENTS; ++i) {
        extractedData[i][0] = students[i].ProceduralProgramming;
        extractedData[i][1] = students[i].IntroductionToProgramming;
        extractedData[i][2] = students[i].OperatingSystems;
    }
}

int main() {
 
    
    int extractedData[N_STUDENTS][N_MODULES];
    extractAndStore(students, extractedData);

    printf("Extracted Data:\n");
    for (int i = 0; i < N_STUDENTS; ++i) {
        printf("Student %d: %d, %d, %d\n", i + 1, extractedData[i][0], extractedData[i][1], extractedData[i][2]);
    }

    return 0;
}