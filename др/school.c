#include <stdio.h>
#include "schoolclass.h"
#include "schoolroom.h"

typedef struct {
    SchoolClass classes[20];
    SchoolRoom rooms[10];
} School;

int main() {
    School mySchool;

    // Примерен код за инициализация (може да добавите данни според нуждите)
    mySchool.classes[0].classNumber = 1;
    mySchool.rooms[0].roomNumber = 101;

    printf("School initialized. Class number: %d, Room number: %d\n",
           mySchool.classes[0].classNumber,
           mySchool.rooms[0].roomNumber);

    return 0;
}
