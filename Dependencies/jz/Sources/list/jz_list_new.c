void	*jz_list_new(int size)
{
	void	**n;

	n = (void **)malloc(sizeof(void *) * 2 + size);
	if (!n)
		return (0);
	n[0] = 0;
	n[1] = 0;
	return (n[2]);
}

void	jz_tree_delete(void *tree)
{
	void	**nodes;
	int		i;
	int		nodes_c;

	nodes = jz_tree_get_nodes(tree);
	nodes_c = jz_tree_get_arity(tree);
	i = 0;
	while (i != nodes_c)
	{
		if (nodes[i])
			jz_tree_delete(nodes[i]);
		++i;
	}
	free(nodes);
}
