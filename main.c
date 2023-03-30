#include "list.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    node a=NULL;
    insert_ordered_list(&a,12);
    insert_ordered_list(&a,2);
    node b=search_elem(a,12);
    print_list(b);
}