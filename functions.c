#include "functions.h"

int readSize(FILE* fp){
    
    int size = 0; // this works
    fscanf(fp, "%d", &size);
    return size;
    
}


void readData(FILE* fp, int sz, int* arr1, int* arr2){
    
    
    int a =  0;
    
    for(int i = 0; i < sz; i++){
        fscanf(fp, "%d", &a);
        arr1[i] = a;
    }
    
    for(int j = 0; j < sz; j++){
        fscanf(fp, "%d", &a);
        arr2[j] = a;
    }
    
    fclose(fp);
    
    
}


int* allocateMemory(int sz){
    
    int* arr1 = (int*)malloc(sz * sizeof(int));
    return arr1;
    
}


int* compareElements(int sz, int* arr1, int* arr2){
    
    int a1point = 0;
    int a2point = 0;
    
    for(int i = 0; i < sz; i++){
        
        if(arr1[i] < arr2[i]){
            
            a2point++;
            
        }else if(arr1[i] > arr2[i]){
            
            a1point++;
            
        }else{
            
        }
        
    }
    
    int* result[2];
    result[0] = &a1point;
    result[1] = &a2point;
    
    return *result;
    
    
}

