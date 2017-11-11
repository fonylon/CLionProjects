//
// Created by 风林 on 2017/10/17.
//

#include <stdlib.h>
#include <memory.h>
#include "LinkList.h"

typedef struct TLinkList {
    int length;
    LinkListNode header;
} TLinkList;

LinkList *createLinkList() {
    TLinkList *temp = malloc(sizeof(TLinkList));
    if (temp != NULL) {
        memset(temp, 0, sizeof(TLinkList));
//        temp->length = 0;
//        temp->header.next = NULL;
    }
    return temp;
}

void destroyLinkList(LinkList *list) {
    if (list == NULL) {
        return;
    }

    TLinkList *temp = (TLinkList *) list;
    free(temp);
    temp = NULL;
}

void clearLinkList(LinkList *list);

int getLinkListLength(LinkList *list);

int getLinkListCapacity(LinkList *list);