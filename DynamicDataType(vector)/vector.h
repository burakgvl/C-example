#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define INITIAL_CAPACITY    8
#define CONSTANT            2
typedef int valueType;


typedef struct Vector{
    valueType* pArr;
    int capacity;
    int size;
}Vector, *HndVector;

HndVector initVector();
HndVector initVectorCapacity(int cap);
int getSize(HndVector hnd);
int getCapacity(HndVector hnd);
int pushBack(HndVector hnd, valueType val);
int getAt(const HndVector hnd, int index);
int isEmpty(const HndVector hnd);
void DestroyVector(HndVector hnd);
void displayVector(HndVector hnd);
int insertAt(HndVector hnd, int index, valueType val);
int removeAt(HndVector hnd, int index);
void popBack(HndVector hnd);
void swapVector(HndVector hnd,valueType index1, valueType index2);
//void add(HndVector vec, valueType val);
#endif // VECTOR_H_INCLUDED
