//
// Created by 风林 on 2017/10/17.
//

#ifndef DATA_STRUCTURE_LINKLIST_H
#define DATA_STRUCTURE_LINKLIST_H
typedef void LinkList;
typedef struct LinkListNode {
    struct LinkListNode *next;
} LinkListNode;
#endif //DATA_STRUCTURE_LINKLIST_H


LinkList *createLinkList();

void destroyLinkList(LinkList *list);

void clearLinkList(LinkList *list);

int getLinkListLength(LinkList *list);

int getLinkListCapacity(LinkList *list);