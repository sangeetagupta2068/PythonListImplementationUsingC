//
// Created by SANGEETA GUPTA on 2019-07-10.
//

#include "data_structures.h"
#include <stdlib.h>
#include <stdio.h>

//initialize the array with default values
int array_create(Array* array,int size) {
    array->array_size = size;
    array->array_pointer = (void**) calloc(size, sizeof(void*));

    if(array->array_pointer == NULL) {
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}

//insert element to the array at particular position
int array_insert_element(Array* array, void* value_address, int position) {
    if(position<array->array_size && position>-1){
        *(array->array_pointer + position) = value_address;
        return EXIT_SUCCESS;
    }

    return EXIT_FAILURE;
}

//get element from the array using array item position
void* array_get_element(Array* array, int position) {
    if (position >= array->array_size) {
        position = array->array_size - 1;
    } else if (position < 0) {
        position = 0;
    }

    return *(array->array_pointer + position);
}

//delete element from the array using th element's position
int array_delete_element(Array* array, int position) {
    if (position > -1 && position < array->array_size ){
        *(array->array_pointer + position) = NULL;
    }

    return EXIT_SUCCESS;
}

//reset array
int array_delete(Array* array) {
    array->array_type = 0;
    array->array_size = 0;
    array->array_pointer = NULL;

    return EXIT_SUCCESS;
}