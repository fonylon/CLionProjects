//
// Created by 风林 on 2017/10/14.
//

#include <stdlib.h>
#include <printf.h>
#include <memory.h>
#include "SeqList.h"

//定义链表结构类型
typedef struct SeqList {
    int length;
    int capacity;
    //存放指针数据，所以类型为二级指针
    unsigned int **nodes;
} SeqList;

//创建链表
List *createSeqList(int capacity) {
    //定义错误码
    int errorCode = 0;
    //分配内存
    SeqList *seqList = (SeqList *) malloc(sizeof(SeqList));
    if (seqList == NULL) {
        errorCode = 1;
        printf("给SeqList分配内存失败:%d", errorCode);
        return NULL;
    }
    //初始化内存空间
    memset(seqList, 0, sizeof(SeqList));
    //根据容量给存放元素的数组分配内存
    seqList->nodes = (unsigned int **) malloc(sizeof(unsigned int *) * capacity);
    if (seqList->nodes == NULL) {
        errorCode = 2;
        printf("给nodes分配内存失败:%d", errorCode);
        return NULL;
    }
    //初始化长度
    seqList->length = 0;
    //初始化容量
    seqList->capacity = capacity;
    return seqList;
}

//销毁链表
void destroySeqList(List *list) {
    //校验参数
    if (list == NULL) {
        return;
    }
    SeqList *seqList = (SeqList *) list;
    //释放存放元素的内存
    if (seqList->nodes != NULL) {
        free(seqList->nodes);
    }
    //释放list内存
    free(seqList);
}

//清空链表
void clearSeqList(List *list) {
    //校验参数
    if (list == NULL) {
        return;
    }
    SeqList *seqList = (SeqList *) list;
    //容器长度归零
    seqList->length = 0;

}

//获取链表长度
int getSeqListLength(List *list) {
    //校验参数
    if (list == NULL) {
        return 0;
    }
    SeqList *seqList = (SeqList *) list;
    return seqList->length;
}

//获取链表容量
int getSeqListCapacity(List *list) {
    //校验参数
    if (list == NULL) {
        return 0;
    }
    SeqList *seqList = (SeqList *) list;
    return seqList->capacity;
}