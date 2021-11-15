#include <stdio.h>
#include "../linked-list/linked_list.h"
#include "../datatypes/datatypes.h"

int main(void) {
    
    linked_list_t *l = new_list(sizeof(contact_t));

    contact_t c1 = {"Felipe", "+5551982867597", 1997, 2, 10};
    contact_t c2 = {"Lipefe", "+5551984536706", 1996, 6, 8};
    contact_t c3 = {"Pefeli", "+5551997683057", 1997, 8, 22};
    push_front(l, &c2);
    push_end(l, &c1);
    push_end(l, &c2);
    push_end(l, &c3);
    push_front(l, &c1);
    insert(l, &c3, 0);
    insert(l, &c1, 5);
    push_end(l, &c2);

    contact_t *accessed_contact = lookup(l, 6);
    printf("=== Contact accessed: %s\t%s\t%i-%i-%i\n",
            accessed_contact->name, accessed_contact->number,
            accessed_contact->day, accessed_contact->month, accessed_contact->year);

    print_contact_list(l);

    delete_list(l);

    return 0;
}