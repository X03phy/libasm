#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	void            *data;
	struct s_list   *next;
} t_list;

void ft_list_sort(t_list **begin_list, int (*cmp)())
{
	if (!begin_list || !cmp || !*begin_list)
		return ;

	int    swapped;
	t_list *ptr;
	void   *tmp;
    t_list *end = 0;

	do {
		swapped = 0;
		ptr = *begin_list;

		while (ptr->next != end) {
			if (cmp(ptr->data, ptr->next->data) > 0) {
				tmp = ptr->data;
				ptr->data = ptr->next->data;
				ptr->next->data = tmp;
				swapped = 1;
			}
			ptr = ptr->next;
		}
        end = ptr;
	} while (swapped);
}

int cmp_int(void *a, void *b)
{
    return (*(int *)a - *(int *)b);
}

t_list *new_node(int value)
{
    t_list *node = malloc(sizeof(t_list));
    int *data = malloc(sizeof(int));
    *data = value;
    node->data = data;
    node->next = 0;
    return node;
}

void print_list(t_list *list)
{
    while (list)
    {
        printf("%d -> ", *(int *)list->data);
        list = list->next;
    }
    printf("NULL\n");
}

int main(void)
{
    // Création d'une liste non triée: 42 -> 3 -> 15 -> 7
    t_list *list = new_node(42);
    list->next = new_node(3);
    list->next->next = new_node(15);
    list->next->next->next = new_node(7);

    printf("Avant tri:\n");
    print_list(list);

    ft_list_sort(&list, cmp_int);

    printf("Après tri:\n");
    print_list(list);

    return 0;
}
