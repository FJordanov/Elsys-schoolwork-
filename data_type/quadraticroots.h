#ifndef QUADRATICROOTS_H
#define QUADRATICROOTS_H

#include <math.h>

typedef struct {
    double x1;      
    double x2;      
    int norealroots;     
} QuadraticRootsResult;

void 
QuadraticRootsResult findroots(double a, double b, double c);

#endif 
