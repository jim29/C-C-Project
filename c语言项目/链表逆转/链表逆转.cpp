#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const int N = 10;
typedef struct node{
    int num;
    struct node* next;
}LNode, *Nodefirst;

void Inverse(Nodefirst& first){
    Nodefirst p, q, r;
    p = NULL; q = first;
    while(q){
        r = q->next;
        q->next = p;
        p = q;
        q = r;
    }
    first = p;
}

int main()
{
    int a;
    Nodefirst p, q, first = NULL;
    for(int i = 0; i < N; i++){
        p = (Nodefirst)malloc(sizeof(LNode));
        scanf("%d", &a);
        p->num = a;
        p->next = NULL;
        if(first == NULL) first = q = p;
        else{
            q->next = p;
            q = p;
        }
    }
    Inverse(first);
    while(first){
        printf("%d\n", first->num);
        first = first->next;
    }
    return 0;
}
