#include "functions.h"

int main(int argc, char* argv[])
{
    int size = 0;
    int* arr1;
    int* arr2;
    int* result;
    
        if(argc < 2){
        printf("The input file failed to open! Exiting the program!");
        exit(1);
    }
    
    FILE *fp;
    fp = fopen(argv[1], "r");
    
        if(fp == NULL){
        printf("The input file failed to open! Exiting the program!");
        exit(2);
    }
    
    size = readSize(fp);
    arr1 = allocateMemory(size);
    arr2 = allocateMemory(size);
    readData(fp, size, arr1, arr2);
    
    result = compareElements(size, arr1, arr2);
    
    for(int i = 0; i < 2; i++){
        printf("%d ", result[i]);
    }
    
    free(arr1);
    free(arr2);
  
}
