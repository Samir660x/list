struct node{
    int data;
    struct node* next;
};
typedef struct node* node;

int insert_head_list(node* head, int elem);

int insert_tail_list(node* head, int elem);

int insert_ordered_list(node* head, int elem);

node* search_elem(node head, int key, int* elem);

//int modify_elem();

//int delete_elem()

int print_list(node head);

//int save_list(node c_head, char f_name[]);

//int load_list(node* c_head, char f_name[]);