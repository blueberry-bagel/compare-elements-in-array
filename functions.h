#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>

/*
return: integer size of arrays in file

param: file pointer

descrip: reads the size of both arrays from the file and then
    returns it as an integer
*/
int readSize(FILE*);

/*
return: void

param: file pointer, integer size, and both pointers to array 1 
    and array 2

descrip: reads the array elements from the file storing them in
    each array.
*/
void readData(FILE*, int, int*, int*);

/*
return: pointer to array

param: integer size of the arrays

descrip: this function allocates memory for the array and returns
    that array.
*/
int* allocateMemory(int);

/*
return: integer array of size 2 containing winning scores

param: integer size, and pointers to both arrays

descrip: this function compares both arrays keeping track of scores and then returns an array containing final scores.
*/
int* compareElements(int, int*, int* );

#endif
