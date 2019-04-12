//
//  main.c
//  LL_Reverse
//
//  Created by Apple 1 on 12/04/19.
//  Copyright © 2019 3B1B. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "LL.h"
#include "LL_Reverse.h"


struct node* head = NULL;


int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    head = insertAtEnd(head, 1);
    head = insertAtEnd(head, 2);
    head = insertAtEnd(head, 3);
    head = insertAtEnd(head, 4);
    head = insertAtEnd(head, 5);
    printf("Given list is :\n");
    print(head);
    
    
    
    
    reverseByIteration();
    printf("reverse By Iteration\n");
    print(head);
    
    
    reverseByRecursion(head);
    printf("reverse By Recursion\n");
    print(head);
    
    printf("print Forward By Recursion\n");
    printForwardByRecursion(head);
    
    printf("print Backward By Recursion\n");
    printBackwardByRecursion(head);
    
    return 0;
}
