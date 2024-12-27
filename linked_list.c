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

    while(Start!=NULL){
        printf("%d\n",Start->data);
        Start=Start->link;
    }
    return 0;

}
