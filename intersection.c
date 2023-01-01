//INTERSECTION OF TWO LINKED LIST

#include"final.h"
#include<stdio.h>
int uni(Node **start, int a) {
    Node *k=(*start);
    while (k!= NULL) {
        if (k->val == a){
            return 1;
        }
        k= k->next;
    }
    return 0;
}
int main(){
Node *list1=initialize();
Node *list2=initialize();
insert_beg(&list1,10);
insert_beg(&list1,20);
insert_beg(&list1,30);
insert_beg(&list1,40);
insert_beg(&list2,10);
insert_beg(&list2,50);
insert_beg(&list2,60);
insert_beg(&list2,20);
insert_beg(&list2,30);
show(list1);
show(list2);
Node *list3=NULL;
Node *current=list1;
Node *temp=list2;
while(temp!=NULL){
    if(uni(&list1,temp->val)==1){
        insert_last(&list3,temp->val);
    }
    temp=temp->next;
}
show(list3);
return 0;

}
