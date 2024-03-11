#include <stdio.h>
#include "student.h"

int main() {
    struct StudentData student;

    student.stu_name = "Maryia";
    student.stu_id = 123456;
    student.stu_age = 45;

    student.stuAddress.street = "4, pr. Nezavisimosti";
    student.stuAddress.state = "Minskaya";
    student.stuAddress.city = "Minsk";
    student.stuAddress.country = "Belarus";

    printf("Hello, %s!\n", student.stu_name);
    printf("Student Id is: %d\n", student.stu_id);
    printf("Student Age is: %d\n", student.stu_age);
    printf("Country: %s, Region: %s, City: %s, Address: %s\n", 
           student.stuAddress.country, student.stuAddress.state, 
           student.stuAddress.city, student.stuAddress.street);

    printf("Goodbye!\n");

    return 0;
}
