#include<stdio.h>
#include<stdlib.h>

// Define the structure for a node
struct Node {
    int data;
    struct Node* link;// pointer ro the next node
};

int main() {
    struct Node* first=(struct Node*)malloc(sizeof(struct Node));
    struct Node* second=(struct Node*)malloc(sizeof(struct Node));
    first->data=23;
    first->link=second;

    second->data=45;
    second->link=NULL;
    struct Node* Start=first;

    //Instertion at starting of Linked list

    struct Node* new=(struct Node*)malloc(sizeof(struct Node));
    new->link=first;
    Start=new;
    Start->data=11;
    new->data=22;


    //Insertion at end of linked list

    struct Node* p=Start;

    while(p!=NULL){
        p=p->link;
    }
    // printf("%d\n",p);

    struct Node* last=(struct Node*)malloc(sizeof(struct Node));
    // last->data=66;

    last->link=NULL;

    second->link=last;
    

    

    while(Start!=NULL){
        printf("%d\t%ld\n",Start->data,Start);
        Start=Start->link;
    }
    return 0;

}
