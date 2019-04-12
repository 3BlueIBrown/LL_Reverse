//
//  LL.h
//  LL
//
//  Created by Apple 1 on 12/04/19.
//  Copyright © 2019 3B1B. All rights reserved.
//


#ifndef LL_h
#define LL_h

#include <stdio.h>


struct node* insertAtBeginning(struct node *head, int data);
struct node* insertAtEnd(struct node *head, int data);
struct node* insertAtPosition(struct node *head, int pos, int data);

struct node* deleteAtBeginning(struct node *head);
struct node* deleteAtEnd(struct node *head);
struct node* deleteAtPosition(struct node *head, int pos);

void print(struct node *head);


#endif /* LL_h */
