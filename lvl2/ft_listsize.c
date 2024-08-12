#include "ft_list.h"

int ft_listsize(t_list *begin_list)
{
	if(begin_list == 0)
		return 0;
	else
		return(1+ ft_listsize(begin_list->next));
}

int main(void)
{
    // Create some list nodes
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));

    // Initialize nodes
    node1->data = NULL;
    node1->next = node2;

    node2->data = NULL;
    node2->next = node3;

    node3->data = NULL;
    node3->next = NULL;

    // Calculate the size of the list
    int size = ft_listsize(node1);

    // Print the result
    printf("The size of the list is: %d\n", size);

    // Free allocated memory
    free(node1);
    free(node2);
    free(node3);

    return 0;
}
