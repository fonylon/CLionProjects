//
// Created by 风林 on 2017/10/14.
//

#ifndef DATA_STRUCTURE_SEQLIST_H
#define DATA_STRUCTURE_SEQLIST_H


typedef void List;

List* createSeqList(int capacity);
void destroySeqList(List* list);
void clearSeqList(List* list);
int getSeqListLength(List* list);
int getSeqListCapacity(List* list);


#endif //DATA_STRUCTURE_SEQLIST_H
