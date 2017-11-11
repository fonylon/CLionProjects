//
// Created by 风林 on 2017/10/24.
//二叉树模型
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stack>
#include <queue>

typedef struct BitNode {
    int data;
    BitNode *lBitNode;
    BitNode *rBitNode;
} BitNode;


void printNode(BitNode *bitNode) {
    if (bitNode == NULL) {
        return;
    }
    printNode(bitNode->lBitNode);
    printf("%d ", bitNode->data);
    printNode(bitNode->rBitNode);
}

//BitNode *findLeft(BitNode *bitNode, stack<BitNode *> &s) {
//}

void printNode2(BitNode *bitNode) {
    if (bitNode == NULL) {
        return;
    }
    if (bitNode->lBitNode) {

    }
}

void countNode(BitNode *bitNode, int *count) {
    if (bitNode == NULL) {
        return;
    }
    if (bitNode->rBitNode) {
        countNode(bitNode->rBitNode, count);
    }
    if (bitNode->lBitNode) {
        countNode(bitNode->lBitNode, count);
    }
    if (bitNode->rBitNode == NULL && bitNode->lBitNode == NULL) {
        (*count)++;
    }
}

int depthNode(BitNode *bitNode) {
    int left = 0;
    int right = 0;
    int result = 0;
    if (bitNode != NULL) {
        left = depthNode(bitNode->lBitNode);
        right = depthNode(bitNode->rBitNode);
        result = 1 + (left > right ? left : right);
    }
    return result;
}

void copyNode(BitNode *source, BitNode *target) {
    if (source != NULL) {
        target->data = source->data;
        if (source->lBitNode) {
            BitNode *temp = static_cast<BitNode *>(malloc(sizeof(BitNode)));
            temp->data = source->lBitNode->data;
            temp->lBitNode = source->lBitNode->lBitNode;
            temp->rBitNode = source->lBitNode->rBitNode;
            target->lBitNode = temp;
            copyNode(source->lBitNode, target->lBitNode);
        } else {
            target->lBitNode = NULL;
        }

        if (source->rBitNode) {
            BitNode *temp = static_cast<BitNode *>(malloc(sizeof(BitNode)));
            temp->data = source->rBitNode->data;
            temp->rBitNode = source->rBitNode->rBitNode;
            temp->lBitNode = source->rBitNode->lBitNode;
            target->rBitNode = temp;
            copyNode(source->rBitNode, target->rBitNode);
        } else {
            target->rBitNode = NULL;
        }
    }
}

int maintree(void) {
    BitNode t1, t2, t3, t4, t5, t6, t7;
    memset(&t1, 0, sizeof(BitNode));
    memset(&t2, 0, sizeof(BitNode));
    memset(&t3, 0, sizeof(BitNode));
    memset(&t4, 0, sizeof(BitNode));
    memset(&t5, 0, sizeof(BitNode));
    memset(&t6, 0, sizeof(BitNode));
    memset(&t7, 0, sizeof(BitNode));

    t1.data = 1;
    t2.data = 2;
    t3.data = 3;
    t4.data = 4;
    t5.data = 5;
    t6.data = 6;
    t7.data = 7;

    t1.lBitNode = &t2;
    t1.rBitNode = &t3;
    t2.lBitNode = &t4;
    t3.lBitNode = &t5;
    t5.lBitNode = &t6;

    int count = 0;

    countNode(&t1, &count);
    printf("count = %d\n", count);

    printf("depth = %d\n", depthNode(&t1));

    printNode(&t1);
    printf("\n");
    copyNode(&t1, &t7);
    count = 0;
    countNode(&t7, &count);
    printf("count7 = %d\n", count);

    printf("depth7 = %d\n", depthNode(&t7));
    printNode(&t7);
    printf("\n");
    return 0;
}