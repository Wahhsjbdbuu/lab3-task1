#include <stdio.h>
#include <string.h>


struct StudentAddress {
    char street[50];
    char state[50];
    char city[50];
    char country[50];
};


struct StudentData {
    char stu_name[50];
    int stu_id;
    int stu_age;
    struct StudentAddress stuAddress; 
};

int main() {
   
    struct StudentData student;

    
    strcpy(student.stu_name, "Maryia");
    student.stu_id = 123456;
    student.stu_age = 45;

    
    strcpy(student.stuAddress.street, "4, pr. Nezavisimosti");
    strcpy(student.stuAddress.state, "Minskaya");
    strcpy(student.stuAddress.city, "Minsk");
    strcpy(student.stuAddress.country, "Belarus");

    
    printf("Hello, %s!\n", student.stu_name);
    printf("Student Id is: %d\n", student.stu_id);
    printf("Student Age is: %d\n", student.stu_age);
    printf("Country: %s, Region: %s, City: %s, Address: %s\n",
           student.stuAddress.country, student.stuAddress.state,
           student.stuAddress.city, student.stuAddress.street);
    printf("Goodbye!");

    return 0;
}