#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    node* p = head->next;
    head->value = 1;
    int st = 0;
    while (p->next) {
        if (p->value) {
            st = 1;
            break;
        }
        p->value = 1;
        p = p->next;
    }
    p = head->next;
    while (p->value) {
        p->value = 0;
        p = p->next;
    }
    if(st){
    	return 1;
	}
    return 0;
}