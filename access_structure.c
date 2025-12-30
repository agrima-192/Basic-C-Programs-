//WAP to access the structure members using structure pointer and dot operator.

#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
};

int main() {
    struct Student s1;
    s1.id = 101;
    strcpy(s1.name, "Agrima");
    struct Student *ptr_s1 = &s1;
    printf("--- Accessing using (*ptr).member ---\n");
    printf("ID: %d\n", (*ptr_s1).id);
    printf("Name: %s\n", (*ptr_s1).name);

    (*ptr_s1).id = 102;

    printf("\n--- Accessing using ptr->member ---\n");
    printf("ID: %d\n", ptr_s1->id);
    printf("Name: %s\n", ptr_s1->name);
    ptr_s1->id = 103;
    printf("\n--- Final value in original variable ---\n");
    printf("Updated ID in s1: %d\n", s1.id);

    return 0;
}
