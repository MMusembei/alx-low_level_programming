0x13-more_singly_linked_lists


File 0-print_listint.c is a function that prints all the elements of a listint_t list.
    Prototype: size_t print_listint(const listint_t *h);
    Return: the number of nodes
    You are allowed to use printf

File 1-listint_len.c is a function that returns the number of elements in a linked listint_t list.

File 2-add_nodeint.c is a function that adds a new node at the beginning of a listint_t list.
    Return: the address of the new element, or NULL if it failed

File 3-add_nodeint_end.c is a function that adds a new node at the end of a listint_t list.
    Return: the address of the new element, or NULL if it failed

File 4-free_listint.c is a function that frees a listint_t list.

File 5-free_listint2.c is a function that frees a listint_t list and sets the head pointer to NULL.
    The function sets the head to NULL

File 6-pop_listint.c is a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
    if the linked list is empty return 0

File 7-get_nodeint.c is a function that returns the nth node of a listint_t linked list.
    where index is the index of the node, starting at 0
    if the node does not exist, return NULL

File 8-sum_listint.c is a function that returns the sum of all the data (n) of a listint_t linked list.
    if the list is empty, return 0

File 9-insert_nodeint.c is a function that inserts a new node at a given position.
    Where idx is the index of the list where the new node should be added. Index starts at 0
    Returns: the address of the new node, or NULL if it failed
    if it is not possible to add the new node at index idx, do not add the new node and return NULL

File 10-delete_nodeint.c is a function that deletes the node at index index of a listint_t linked list.
    where index is the index of the node that should be deleted. Index starts at 0
    Returns: 1 if it succeeded, -1 if it failed

File 100-reverse_listint.c is a function that reverses a linked list.
    Returns: a pointer to the first node of the reversed list
    You are not allowed to use more than 1 loop.
    You are not allowed to use malloc, free or arrays
    You can only declare a maximum of two variables in your function

File 101-print_listint_safe.c is a function that prints a listint_t linked list, safely.
    Returns: the number of nodes in the list
    This function can print lists with a loop
    You should go through the list only once
    If the function fails, exit the program with status 98

File 102-free_listint_safe.c is a function that frees a listint_t list, safely.
    This function can free lists with a loop
    You should go though the list only once
    Returns: the size of the list that was free’d
    The function sets the head to NULL

File 103-find_loop.c is a function that finds the loop in a linked list.
 Returns: The address of the node where the loop starts, or NULL if there is no loop
 You are not allowed to use malloc, free or arrays
 You can only declare a maximum of two variables in your function


File lists.h is the header file containing all these function prototypes and the data structure listint_t.