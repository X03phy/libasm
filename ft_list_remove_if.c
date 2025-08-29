

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
	t_list *list = *begin_list;
	t_list *previous = NULL;
	// checks
	while (list)
	{
		if (cmp(data_ref, list->data) == 0)
		{
			list->
			free_fct(list->data);
		}
		else
		{

		}
	}
}

//variante 2: ptr sur ptr
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list **current = begin_list;
    t_list *temp;

    while (*current)
    {
        if (cmp((*current)->data, data_ref) == 0)
        {
            temp = *current;
            *current = (*current)->next;
            free(temp);
        }
        else
        {
            current = &(*current)->next;
        }
    }
}