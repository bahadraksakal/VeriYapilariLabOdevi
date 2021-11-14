#include <stdio.h>
#include <stdlib.h>
#define K 33

int linkedListedLenghtRecursive();
typedef struct node
{
    void*        dataPtr;
    struct node* link;
} NODE;

typedef struct
{
    NODE* head;
} LIST;

LIST* createList()
{
    LIST* list;

    list = (LIST*) malloc (sizeof (LIST));
    if (list)
    {
        list->head    = NULL;
    }
    else
    {
        printf("list is don't created");
    }

    return list;
}
static int _insert (LIST* pList, NODE* pPre,
                    void* dataInPtr)
{
    NODE* pNew;


    if (!(pNew = (NODE*) malloc(sizeof(NODE))))
        return -1;

    pNew->dataPtr   = dataInPtr;
    pNew->link      = NULL;
    pNew->link       = pList->head;
    pList->head      = pNew;


    return 0;
}
int addNode (LIST* pList, void* dataInPtr)
{

    int success;

    NODE* pPre;
    success = _insert (pList, pPre, dataInPtr);
    if (success != 0)
        return (-1);
    return (0);
}
int linkedListedLenghtRecursive(NODE* head,int* sayac)
{
    (*sayac)++;
    if(head->link)
    {

        return linkedListedLenghtRecursive(head->link,sayac);
    }
    else
    {
        return *sayac;
    }
}
int main()
{
    LIST* list=createList();
    int* sayi;
    for(int i=0; i<K; i++)
    {
        printf("ok - adim : %d\n",i);
        sayi=i;
        addNode(list,sayi);

    }
    NODE* temp= list->head;
    for(int i=0; i<K; i++)
    {
        printf("i = %d ||| %d  -\n",i,temp->dataPtr);
        temp=temp->link;
    }
    int lenght=0;
    int *sayac=&lenght;
    lenght=linkedListedLenghtRecursive(list->head,sayac);
    printf("%d\n",lenght);
    printf("finish");
    return 0;
}
