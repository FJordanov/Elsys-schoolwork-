#ifndef SCHOOLROOM_H
#define SCHOOLROOM_H

#include "person.h"

typedef struct {
    int roomNumber;
    Person occupants[50];
} SchoolRoom;

#endif
