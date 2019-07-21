//
// Created by SANGEETA GUPTA on 2019-07-21.
//
#include <stdio.h>
#include <stdlib.h>
#include "data_structures.h"

int main(){
    Array array;
    array_create(&array,10);
    char value = 'a';
    int integer = 10;
    int* integer_array = {1,2,3,4};
    char* string = "String";
    array_insert_element(&array,&value,1);
    array_insert_element(&array,&integer,2);
    array_insert_element(&array,string,0);
    array_insert_element(&array,integer_array,3);

    printf("\n%c",*(char*)array_get_element(&array,1));
    printf("\n%s",(char*)array_get_element(&array,0));
    printf("\n%d",*(int*)array_get_element(&array,2));
    printf("\n%d",(int*)array_get_element(&array,3));
    return EXIT_SUCCESS;
}