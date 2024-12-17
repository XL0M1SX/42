#include "get_next_line.h"



char *get_next_line(int fd){
    static t_list *lst = NULL;
    char *next_line;

    //control conditions

    //create list up until \n

    //get line from list

    //manage the part after \n
}

void c_list(t_list **lst, int fd){

    //cycle trough and read the fd file up until \n

    //control EOF

    //null terminate the buffer

    //append node
}

void append_node(t_list **lst, char *buffer){

    //go to the last node of the list lst

    //malloc for a new node

    //control for malloc and empty list

    //append node
}

char *new_line(t_list *lst){

    //controls

    //count the characters before \n to malloc correctly

    //copy the string in the buffer and return it
}