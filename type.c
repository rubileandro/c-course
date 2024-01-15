#include <stdio.h>
#include <string.h>

typedef struct
{
    char first_name[50];
    char last_name[50];
    int age;
} Student;

void print_student(Student s);

int main(void)
{
    Student s1;
    s1.age = 20;
    strcpy(s1.first_name, "Devon");
    strcpy(s1.last_name, "smith");

    print_student(s1);
    printf("\n%s %s \n", s1.first_name,
           s1.last_name);
    printf("Age: %d\n", s1.age);

    return 0;
}

void print_student(Student s)
{
    printf("%s %s \n", s.first_name,
                              s.last_name);
    printf("Age: %d\n", s.age);
    s.age = 25;
    s.first_name[0] = 'K';
}
