#include "singlelist.h"

SingleList *creatNode()
{
    SingleList *temp;

    temp = (SingleList*)malloc(sizeof(SingleList));
    assert(temp);

    temp->next = NULL;

    return temp;
}

SingleList *creatHeadInsert()
{
    
    printf("Please input the numbers:\n");

    SingleList* head;
    head = creatNode();

    int value;

    while (scanf_s("%d",&value) != EOF,value != -1)
    {
        SingleList* temp = malloc(sizeof(SingleList));
        assert(temp);

        temp->data = value;
        temp->next = head->next;
        
        head->next = temp;
    }
    
    return head;

}

SingleList *creatTailInsert()
{

    SingleList *head, *tail;
    head = creatNode();

    tail = head;

    int m_data;
    printf("Please input array2:\n");
    while (scanf_s("%d", &m_data) != EOF,m_data != -1)
    {
        SingleList *temp;
        temp = malloc(sizeof(SingleList));
        assert(temp);
        temp->data = m_data;

        tail->next = temp;
        tail = temp;
    }

    tail->next = NULL;
    return head;
}

SingleList* deleteNode(SingleList* m_head, int m_data) {
    assert(m_head);
    SingleList* head = m_head;
    while (head->next) {
        if (head->next->data == m_data) {
            SingleList* temp;
            temp = head->next;

            head->next = temp->next;

            free(temp);
                
            break;
        }
        head = head->next;
    }

    return m_head;
}

void printList(SingleList* head) {

    printf("The numbers:\n");

    while (head->next) {
        printf("%d ", head->next->data);

        head = head->next;
    }

    printf("\n");
}
