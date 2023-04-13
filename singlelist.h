#ifndef SINGLELIST_H
#define SINGLELIST_H
#include <assert.h>
#include <malloc.h>
#include <stdio.h>
typedef struct node
{
    /* data */
    int data;
    struct node *next;
} SingleList;

SingleList *creatNode();
SingleList *creatHeadInsert();
SingleList *creatTailInsert();
void printList(SingleList* head);
SingleList* deleteNode(SingleList* m_head, int m_data);
#endif
