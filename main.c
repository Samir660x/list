#include "list.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    node a=NULL;
    insert_head_list(&a,1);
    insert_head_list(&a,5);
    insert_head_list(&a,1);

    modify_elem(&a,5,2);
    print_list(a);
}