//
//  LL.c
//  LL
//
//  Created by Apple 1 on 12/04/19.
//  Copyright © 2019 3B1B. All rights reserved.
//

#include "LL.h"
#include <stdio.h>
#include <stdlib.h>


struct node{
    int data;
    struct node* next;
};






struct node* insertAtBeginning(struct node *head, int data){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    
    newNode->next = head;
    head = newNode;
    return head;
    
}



struct node* insertAtEnd(struct node *head, int data){
    
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    
    if(head == NULL){
        head = newNode;
        return head;
    }
    
    struct node *temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
    
}




struct node* insertAtPosition(struct node *head, int pos, int data){
    
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    
    if(pos==1){
        newNode->next = head;
        head = newNode;
        return head;
    }
    
    struct node *temp = head;
    int i;
    for(i=0; i<pos-2; i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
    
}








struct node* deleteAtBeginning(struct node *head){
    
    if(head == NULL){
        printf("The list is empty!\n");
        return head;
    }
    struct node *temp = head;
    head = head->next;
    free(temp);
    return head;
    
}




struct node* deleteAtEnd(struct node *head){
    
    if(head == NULL){
        printf("The list is empty!\n");
        return head;
    }
    
    
    if(head->next==NULL){
        struct node *temp = head;
        head = NULL;
        free(temp);
        return head;
    }
    
    
    struct node *temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    struct node *temp1 = temp->next;
    temp->next = NULL;
    free(temp1);
    return head;
    
}




struct node* deleteAtPosition(struct node *head, int pos){
    
    if(head == NULL){
        printf("The list is empty!\n");
        return head;
    }
    
    if(pos==1){
        struct node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    
    struct node *temp = head;
    int i;
    for(i=0; i<pos-2; i++){
        temp = temp->next;
    }
    struct node *temp1 = temp->next;
    temp->next = temp1->next;
    free(temp1);
    return head;
    
}





void print(struct node *head){
    while(head!=NULL){
        
        if(head->next == NULL){
            printf("%d\n\n",head->data);
            return;
        }
        printf("%d->",head->data);
        head = head->next;
    }
}






