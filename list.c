// gcc list.c -std=c99 -pedantic -O2 -Wall -Wextra
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int insert_head_list(node* head, int elem){
    node new_head=NULL;
    if( (new_head=(node)malloc(sizeof(struct node))) ){
        new_head->data=elem;
        new_head->next=*head;
        *head=new_head;
        return 0;
    }
    return 1;
}

int insert_tail_list(node* head, int elem){
    node new_node=NULL;
    if((insert_head_list(&new_node,elem))) return 1;
    if(*head==NULL){
        *head=new_node;
        return 0;
    }
    node p=*head;
    while(p->next)// !=NULL
        p=p->next;
    p->next=new_node;
    return 0;
}

int insert_ordered_list(node* head, int elem){
    node search=*head;
    node back=*head; //nodo precedente

    node new_head=NULL;
    if(insert_head_list(&new_head,elem)) return 1;
    
    while(search!=NULL && (search->data < new_head->data)){
        back=search;
        search=search->next;
    }
    if(search==(*head)){
        new_head->next=*head;
        *head=new_head;
    }else{
        back->next=new_head;
        new_head->next=search;
    }
    return 0;
}

node search_elem(node head, int key){
    while(head!=NULL && head->data!=key){
        head=head->next;
    }
    return head;
}

int modify_elem(node* head,int key, int elem){
    node node=search_elem(*head, key);
    if(node){
        node->data=elem;
        return 0;
    }
    return 1;
}

int print_list(node head){
    int i=0;
    for(;head!=NULL;head=head->next, i++)
        printf("%d) %d\n",i+1,head->data);
    return i;
}


/*
int Save_list(node c_head, char f_name[]){
    FILE* fp=fopen(f_name,"w");
    if(fp==NULL) return 1;
    while(c_head!=NULL){
        fprintf(fp,"%d\n",c_head->data);
        c_head=c_head->next;
    }
    return 0;
}

int Load_list(node* c_head, char f_name[]){
    FILE* fp=fopen(f_name,"r");
    int elem;
    if(fp==NULL) return 1;
    while(fscanf(fp,"%d",&elem)!=EOF){
        Insert_tail_list(c_head,elem);
    }
    return 0;
}
*/