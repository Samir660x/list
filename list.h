struct node{
    int data;
    struct node* next;
};
typedef struct node* node;

int insert_head_list(node*, int);

int insert_tail_list(node*, int);

int insert_ordered_list(node*, int);

node search_elem(node, int);

int modify_elem(node*,int, int);

int delete_elem(node*, int);

int print_list(node);

//int save_list(node c_head, char f_name[]);

//int load_list(node* c_head, char f_name[]);