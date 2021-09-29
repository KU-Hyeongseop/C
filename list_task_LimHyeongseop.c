#include <stdio.h>
#include <stdlib.h>
void ll_input(), ll_print(), ll_update(), ll_delete();

struct NODE {
    int ID;
    int value;
    struct NODE *next;
} *head, *curr, *ptr;

int main()
{
    head = NULL;
    int index, flag = 0;
    while(flag == 0) {
        printf("Enter [(1) Input, (2) Print, (3) Update, (4) Delete, (5) Exit]: ");
        scanf("%d", &index);
        if (index==1) {ll_input();}
        else if(index==2) {ll_print();}
        else if(index==3) {ll_update();}
        else if(index==4) {ll_delete();}
        else if(index==5) {printf("Exit this Program\n"); flag=1;}
        else {printf("Enter Again (between 1 and 5)\n");}
    }
    return 0;
}

void ll_input() {
    int in_ID, in_value;
    printf("\tID, value: "); scanf("%d %d", &in_ID, &in_value);
    ptr = (struct NODE *)malloc(sizeof(struct NODE));
    if (head==NULL) {head = ptr;} else {curr->next = ptr;}
    ptr->ID = in_ID;
    ptr->value = in_value;
    ptr->next = NULL;
    curr = ptr;
	ll_print();
}

void ll_print() {
    ptr = head;
    printf("(ID, Values): ");
    while(ptr != NULL) {
        printf("(%d, %d) ", ptr->ID, ptr->value);
        ptr = ptr->next;
    }
    printf("\n");
}

void ll_update() {
    int update_ID, update_value;
    printf("\tID for update: "); scanf("%d", &update_ID);
    ptr = head;
    while (ptr != NULL) {
        if(ptr->ID == update_ID) {
            printf("\tEnter the value for this ID: "); 
			scanf("%d", &update_value);
            ptr->value = update_value;
            ll_print();
            return;
        }
        ptr = ptr->next;
    }
}

void ll_delete() {
    int delete_ID;
    printf("\tID for delete: "); scanf("%d", &delete_ID);
    ptr = head;
    if(ptr->ID == delete_ID) { /* Delete the first NODE */
        head = ptr->next;
        free(ptr);
		ll_print();
        return;
    }
	
    while (ptr != NULL) { /* Otherwise */
        curr = ptr;
        ptr = ptr->next;
        if(ptr->ID == delete_ID) {
            curr->next = ptr->next;
            free(ptr);
			ll_print();
            //이 밑부분 추가했습니다.
            while(curr->next != NULL){
                curr = curr->next;
            }
            return;
        }
    }	
}