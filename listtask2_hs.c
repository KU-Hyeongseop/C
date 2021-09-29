#include <stdio.h>
#include <stdlib.h>
void ll_input(int,int), ll_print();

struct NODE{
    int ID;
    int value;
    struct NODE *next;
} *head, *tail, *ptr;

int main(){
    head = NULL;
    ll_input(1,11); //ID: 1, value : 11
    ll_input(2,22); //ID: 2, value : 22
    ll_input(3,33); //ID: 3, value : 33
    ll_print();
    return 0;
}

void ll_input(int a, int b){
    ptr = (struct NODE *)malloc(sizeof(struct NODE));
    if(head == NULL){head = ptr;}
    else{tail->next = ptr;}
    ptr->ID = a;
    ptr ->value = b;
    ptr -> next = NULL;
    tail = ptr;
}

void ll_print(){
    ptr = head;
    while(ptr != NULL){
        printf("(%d,%d)", ptr->ID, ptr->value);
        ptr = ptr->next;
    }
    printf("\n");
}
