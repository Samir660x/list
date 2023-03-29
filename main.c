#include "list.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    node a;
    insert_tail_list(&a,1);
    insert_tail_list(&a,12);
    print_list(a);
}