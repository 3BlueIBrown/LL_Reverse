//
//  LL_Reverse.h
//  LL_Reverse
//
//  Created by Apple 1 on 12/04/19.
//  Copyright © 2019 3B1B. All rights reserved.
//

#ifndef LL_Reverse_h
#define LL_Reverse_h

#include <stdio.h>
//SINCE HEAD IS NOT DEFINED IN THE MAIN AND PASSED FROM THERE LIKE LL PROJECT FUNCTIONS AND SO IT BECOMES OUR RESPONSIBILITY TO DECLARE AN EXTERN HEAD IN LL_Reverse.h OR LL_Reverse.c SO THAT THE LL_Reverse KNOWS THAT THERE IS SOME HEAD DEFINED SOMEWHERE IN PROJECT

extern struct node *head; //DECLARING THE VARIABLE HEAD, DEFINED IN GLOBAL

void reverseByIteration(void);
void reverseByRecursion(struct node *p);
void printForwardByRecursion(struct node *head);
void printBackwardByRecursion(struct node *p);



#endif /* LL_Reverse_h */






