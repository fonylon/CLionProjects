//
// Created by 风林 on 2017/8/13.
//

#include <printf.h>

//定义数组
typedef int (Array)[5];

//定义数组指针
typedef int(*PArray)[5];

int mainArray() {
    Array array;
    printf("%ld\n", sizeof(array));
    for (int i = 0; i < 5; i++) {
        array[i] = 1 + i;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d,", array[i]);
    }

    //数组指针定义方式一：使用typedef
    PArray pArray = &array;
    for (int i = 0; i < 5; i++) {
        printf("%d,", (*pArray)[i]);
    }
    //数组指针定义方式二：直接定义
    int (*pArray2)[5] = &array;
    for (int i = 0; i < 5; i++) {
        printf("%d,", (*pArray2)[i]);
    }
    //数组指针定义方式三：使用数组定义类型取地址等同于获取int类型数据类型地址使用 int *
    Array *pArray3 = &array;
    for (int i = 0; i < 5; i++) {
        printf("%d,", (*pArray3)[i]);
    }
    return 0;
}
