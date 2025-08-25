typedef struct s_list
{
	void          *data;
	struct s_list *next;
} t_list;

void ft_list_sort(t_list **begin_list, int (*cmp)())
{
	if (!begin_list || !cmp || !*begin_list)
		return ;

	int    swapped;
	t_list *ptr;
	void   *tmp;

	do {
		swapped = 0;
		ptr = *begin_list;

		while (ptr->next != 0) {
			if (cmp(ptr->data, ptr->next->data) > 0) {
				tmp = ptr->data;
				ptr->data = ptr->next->data;
				ptr->next->data = tmp;
				swapped = 1;
			}
		}
	} while (swapped);
}
