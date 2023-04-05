#include "list.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    node a=NULL;
    int op=-1, elem, key;

    do{
        printf("1)Inserisci elemento in testa\n");
        printf("2)Inserisci elemento in coda\n");
        printf("3)Inserisci elemento ordinato\n");
        printf("4)Modifica elemento\n");
        printf("5)Elimina elemento\n");
        printf("6)Stampa lista\n");
        printf("0)Exit\n");

        scanf("%d",&op);
        switch(op){
            case 1:
                printf("\nInserisci elemento:");
                scanf("%d",&elem);
                insert_head_list(&a,elem);
                break;
            
            case 2:
                printf("\nInserisci elemento:");
                scanf("%d",&elem);
                insert_tail_list(&a,elem);
                break;

            case 3:
                printf("\nInserisci elemento:");
                scanf("%d",&elem);
                insert_ordered_list(&a,elem);
                break;

            case 4:
                printf("\nInserisci elemento da cercare:");
                scanf("%d",&key);
                printf("\nInserisci elemento da inserire:");
                scanf("%d",&elem);
                modify_elem(&a,key,elem);
                break;

            case 5:
                printf("\nInserisci elemento da eliminare:");
                scanf("%d",&key);
                delete_elem(&a,key);
                break;

            case 6:
                printf("\n");
                print_list(a);
                break;

            case 0:
                return 0;
                
            default:
                printf("Errore");
        }
    }while(op);
}