#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

int main()
{
    HndVector vector1 = initVectorCapacity(2);
    HndVector vector2 = initVector();
    printf("vector1 capacity: %d\n", getCapacity(vector1));
    printf("vector2 capacity: %d\n", vector2->capacity);

    for(size_t i=0; i<10; i++){
        pushBack(vector1,2*i);
    }

    displayVector(vector1);
    insertAt(vector1,4,99);
    displayVector(vector1);

    return 0;
}
