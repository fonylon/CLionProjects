//
// Created by 风林 on 2017/9/28.
//
#include <stdio.h>
#include <stdlib.h>

int main0801() {
    int a = 30;
    typedef int (*IntArray)[10];
    IntArray intArray;
    for (int i = 0; i < 10; ++i) {
        *intArray[i] = i;
    }
    for (int i = 0; i < 10; ++i) {
        printf("a = %d\n", *(intArray[i]));
    }
    int array1[10];
    for (int i = 0; i < 10; ++i) {
        *(array1 + i) = i;
    }
    for (int i = 0; i < 10; ++i) {
        printf("a = %d\n", (array1[i]));
    }
    int *array[10];
    array[0] = &a;
    printf("a = %d\n", *(array[0]));
    return 0;
}