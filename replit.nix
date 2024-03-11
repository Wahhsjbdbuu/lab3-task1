#ifndef STUDENT_H
#define STUDENT_H

struct StudentAddress {
    char *street;
    char *state;
    char *city;
    char *country;
};

struct StudentData {
    char *stu_name;
    int stu_id;
    int stu_age;
    struct StudentAddress stuAddress;
};

#endif
