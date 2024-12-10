#include <stdio.h>

struct student {
    char name[20];
    int class_number;
    float average_grade;
};

int main() {
    struct student s1;
    
    snprintf(s1.name, sizeof(s1.name), "Ivan");
    s1.class_number = 5;
    s1.average_grade = 4.75;

    printf("Име: %s\n", s1.name);
    printf("Номер в клас: %d\n", s1.class_number);
    printf("Среден успех: %.2f\n", s1.average_grade);

    return 0;
}
