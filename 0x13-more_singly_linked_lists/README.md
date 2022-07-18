MORE SINGLY LINKED LISTS

0. Print List int
Write a function that prints all the elements of a listint_t list.
Return: the number of nodes

1. List Lenght int
Write a function that returns the number of elements in a linked listint_t list.

2. Add Node Int
Write a function that adds a new node at the beginning of a listint_t list.
Return: the address of the new element, or NULL if it failed

3. Add Node Int End
Write a function that adds a new node at the end of a listint_t list.
Return: the address of the new element, or NULL if it failed

4. Free List Int
Write a function that frees a listint_t list.

5. Free List Int 2
Write a function that frees a listint_t list.
The function sets the head to NULL

6. Pop List Int 
Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
if the linked list is empty return 0

7. Get Node Int
Write a function that returns the nth node of a listint_t linked list.
where index is the index of the node, starting at 0
if the node does not exist, return NULL

8. Sum List Int
Write a function that returns the sum of all the data (n) of a listint_t linked list.
if the list is empty, return 0

9. Insert Node Int
Write a function that inserts a new node at a given position.
where idx is the index of the list where the new node should be added. Index starts at 0
Returns: the address of the new node, or NULL if it failed
if it is not possible to add the new node at index idx, do not add the new node and return NULL.

10. Delete Node Int
Write a function that deletes the node at index index of a listint_t linked list.
where index is the index of the node that should be deleted. Index starts at 0
Returns: 1 if it succeeded, -1 if it failed

100. Reverse List Int
Write a function that reverses a listint_t linked list.
Returns: a pointer to the first node of the reversed list
You are not allowed to use more than 1 loop.
You are not allowed to use malloc, free or arrays
You can only declare a maximum of two variables in your function

101. Print List Int Safe
Write a function that prints a listint_t linked list.
Returns: the number of nodes in the list
This function can print lists with a loop
You should go through the list only once
If the function fails, exit the program with status 98
Output format: see example

102. Free List Int Safe
Write a function that frees a listint_t list.
This function can free lists with a loop
You should go though the list only once
Returns: the size of the list that was free’d
The function sets the head to NULL

103. Find Loop
Write a function that finds the loop in a linked list.
Returns: The address of the node where the loop starts, or NULL if there is no loop
You are not allowed to use malloc, free or arrays
You can only declare a maximum of two variables in your function
