#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 1000
typedef struct Node{
    char *s;
    struct Node* next;
}*PNode;

int main(int argc, char* argv[])
{
    FILE* fp;
    int n;
    char buf[N];
    if(argv[1][0] == '-'){
        fp = fopen(argv[2], "r");
        n = atoi(argv[1]+1);
    }
    else{
        n = 10;
        fp = fopen(argv[1], "r");
    }
    PNode ptr, first;
    first = ptr = (PNode)malloc(sizeof(struct Node));
    first->s = NULL;
    for(int i = 0; i < n; i++){
        ptr->next = (PNode)malloc(sizeof(struct Node));
        ptr = ptr->next;
        ptr->s = NULL;
    }
    ptr->next = first;
    while(fgets(buf, N, fp) != NULL){
        if(ptr->s != NULL)
            free(ptr->s);
        ptr->s = (char*)malloc(sizeof(char)*strlen(buf)+1);
        strcpy(ptr->s, buf);
        ptr = ptr->next;
    }
    for(int i = 0; i < n; i++){
        printf("%s", ptr->s);
        ptr = ptr->next;
    }
    fclose(fp);
    return 0;
}
