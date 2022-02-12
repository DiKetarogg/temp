#include <jz_tree.h>
#include <stdlib.h>

void	*jz_tree_new(int nodes, int size)
{
	void	**n;
	int		i;

	n = (void **)malloc(nodes * sizeof(void *) + size + sizeof(int));
	if (!n)
		return (0);
	i = 0;
	while (i != nodes)
	{
		*n = 0;
		++n;
		++i;
	}
	*(int *)n = nodes;
	return (((int *)n + 1));
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
