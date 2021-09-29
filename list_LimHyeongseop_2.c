#include <stdio.h>
#include <stdlib.h>
void input_hs(), print_hs(), update_hs();//, delete_hs();

struct NODE{
    int ID;
    int value;
    struct NODE *next;
} *head, *curr, *ptr;

int main(){
    head = NULL;
    int index, flag = 0;
    printf("아직 배우지 않은 함수들은 주석처리해 두었습니다.\n");
    while (flag == 0){
        printf("Enter [ (1) Input, (2) Print, (3) Update, (4) Delete, (5) Exit] : ");
        scanf("%d", &index);
        if(index==1) {input_hs();}
        else if(index==2) {print_hs();}
        else if(index==3) {update_hs();}
        //else if(index==4) {delete_hs();}
        else if(index==5) {printf("Exit this Program\n"); flag=1;}
        else {printf("Enter again\n");}
    }
    return 0;
}

void input_hs(){
    int input_ID, input_value;
    printf("\tID, value: "); scanf("%d %d", &input_ID, &input_value);
    ptr = (struct NODE *)malloc(sizeof(struct NODE));
    if (head==NULL) {head = ptr;} else{curr->next = ptr;}
    ptr->ID = input_ID;
    ptr->value = input_value;
    ptr->next = NULL;
    curr = ptr;
    print_hs();
}

void print_hs(){
    ptr = head;
    printf("(ID, Values) : ");
    while(ptr !=NULL){
        printf("(%d,%d) ",ptr->ID, ptr->value);
        ptr = ptr->next;
    }
    printf("\n");
}

void update_hs(){
    int update_ID, update_value;
    printf("\tID for update : ");
    scanf("%d", &update_ID);
    ptr = head;
    while (ptr != NULL){
        if(ptr->ID == update_ID){
            printf("\tEnter the value for this ID : ");
            scanf("%d", &update_value);
            ptr->value = update_value;
            print_hs();
            return; //return 없으면 에러남.
        }
        ptr = ptr->next;
    }
}