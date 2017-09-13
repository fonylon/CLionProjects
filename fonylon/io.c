//
// Created by 风林 on 2017/8/14.
// 自定义函数替换系统函数
//

#include <stdio.h>

#define malloc(n)  vmalloc(n)

int vmalloc(int n){
    printf("%d", n);
    return 0;
}

int mainio(){
    int a = 10;
    malloc(a);
    return 0;
}