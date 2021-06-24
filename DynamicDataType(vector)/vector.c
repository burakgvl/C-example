#include "vector.h"


HndVector initVector()
{
   return initVectorCapacity(INITIAL_CAPACITY);
}

HndVector initVectorCapacity(int cap)
{
     HndVector pVector = (HndVector)malloc(sizeof(Vector));
    if(pVector == NULL){
        printf("not enough memory for Handle");
        return NULL;
    }

    pVector->pArr = (valueType*) malloc(sizeof(valueType)*cap);
    if(pVector->pArr == NULL){
        printf("not enough memory for capacity");
        free(pVector);
        return NULL;
    }

    pVector->size = 0;
    pVector->capacity = cap;

    return pVector;

}

int getSize(HndVector hnd)
{
    return hnd->size;
}

int getCapacity(HndVector hnd)
{
    return hnd->capacity;
}

static int setCapacity(HndVector hnd)
{
    size_t newCapacity = hnd->capacity*CONSTANT;
    valueType* pNewHnd = (valueType*) realloc(hnd->pArr,newCapacity);
    if(pNewHnd == NULL){
        printf("not enough memory for capacity");
        return -1;
    }

    hnd->capacity = newCapacity;
    hnd->pArr = pNewHnd;

    return newCapacity;
}

int pushBack(HndVector hnd, valueType val)
{
    if(hnd->size >= hnd->capacity)
        if(setCapacity(hnd) == -1)
            return -1;
    hnd->pArr[hnd->size++] = val;

    return hnd->size-1;
}

int getAt(const HndVector hnd, int index)
{
    if(index<0 || index> hnd->size)
        return -1;

    return hnd->pArr[index];
}

int isEmpty(const HndVector hnd)
{
    return !(hnd->size == 0);
}

void DestroyVector(HndVector hnd)
{
    free(hnd->pArr);
    free(hnd);
}

void displayVector(HndVector hnd)
{
    for(size_t i=0; i<getSize(hnd); i++){
        printf("index=%d  val=%d\n",i,hnd->pArr[i]);
    }
}

int insertAt(HndVector hnd, int index, valueType val)
{
    if(index<0 || index> hnd->size)
        return -1;
    if(hnd->size >= hnd->capacity)
    {
        if(setCapacity(hnd) == -1)
            return -1;
    }

    memmove(&hnd->pArr[index+1], &hnd->pArr[index], sizeof(valueType)*(hnd->size - index));
    hnd->pArr[index] = val;
    ++hnd->size;

    return index;
}

int removeAt(HndVector hnd, int index)
{
    if(index<0 || index> hnd->size)
        return -1;

    memmove(&hnd->pArr[index], &hnd->pArr[index+1], sizeof(valueType)*(hnd->size - index-1));
    --hnd->size;

    return index;
}


void popBack(HndVector hnd)
{
    removeAt(hnd,hnd->size-1);
}

void swapVector(HndVector hnd,valueType index1, valueType index2)
{
    valueType temp;
    temp = hnd->pArr[index1];
    hnd->pArr[index1] = hnd->pArr[index2];
    hnd->pArr[index2] = temp;
}
