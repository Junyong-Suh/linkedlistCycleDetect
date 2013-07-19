#include <stdio.h>

typedef struct node {
    int value;
    struct node* next;
} node;

// takes O(n) time complexity
int hasCycleInLinkedList(node* head) {
    node* slow = head;
    node* fast = head;
   
    if (!head) return 0;
   
    while (slow != null && fast != null) {
        if (slow->next)
            slow = slow->next;
        else
            return 0;
           
        if (fast->next && fast->next->next)
            fast = fast->next->next;
        else
            return 0;
           
        if (slow == fast)
            return 1;
    }

    return 0;    // if it doesn't have cycle
}
