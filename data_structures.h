//
// Created by SANGEETA GUPTA on 2019-07-10.
//

#ifndef DATASTRUCTURESMSC_DATA_STRUCTURES_H
#define DATASTRUCTURESMSC_DATA_STRUCTURES_H

#define FALSE 0
#define TRUE !FALSE

//user defined datatype declaration
typedef enum {
    CHAR = 1,
    INT = 4,
    DOUBLE = 5,
} Datatype;

typedef struct {
    void **array_pointer;
    int array_size;
    Datatype array_type;
} Array;

//function declarations
int array_create(Array *, int);

int array_delete(Array *);

void* array_get_element(Array *, int);

int array_insert_element(Array *, void*, int);

int array_delete_element(Array *, int);

#endif //DATASTRUCTURESMSC_DATA_STRUCTURES_H
