// 4. Student Attendance Eligibility System
// Problem statement:

// A college wants to check whether students are eligible to attend their semester examinations based on attendance percentage


#include <stdio.h>

int main() {
    float attendance;

    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    if (attendance < 0 || attendance > 100) {
        printf("Invalid attendance");
    }
    else if (attendance >= 75) {
        printf("Eligible for examination");
    }
    else {
        printf("Not eligible for examination");
    }

    return 0;
}

