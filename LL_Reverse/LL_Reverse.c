//
//  LL_Reverse.c
//  LL_Reverse
//
//  Created by Apple 1 on 12/04/19.
//  Copyright © 2019 3B1B. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "LL_Reverse.h"



struct node{
    int data;
    struct node* next;
};

//extern struct node *head; ALREADY DEFINED IN .H FILE




void reverseByIteration(){
    struct node *current, *previous, *next;
    current = head;
    previous = NULL;
    
    while(current!=NULL){
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    head = previous;
    return;
}






void reverseByRecursion(struct node *p){
    
    if(p->next==NULL){
        head = p;
        return;
    }
    reverseByRecursion(p->next);
    struct node *q = p->next;
    q->next = p;
    p->next = NULL;
    
}





void printForwardByRecursion(struct node *head){
    
    if(head->next == NULL){
        printf("%d\n\n",head->data);
        return;
    }
    
    printf("%d->",head->data);
    printForwardByRecursion(head->next);
    
}




void printBackwardByRecursion(struct node *p){
    
    if(p == NULL){
        return;
    }
    
    printBackwardByRecursion(p->next);
    if(p==head){
        printf("%d\n\n",p->data);
        return;
    }
    printf("%d->",p->data);
    
}






