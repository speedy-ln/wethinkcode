#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*tree;

	tree = NULL;
	tree = (t_btree*)malloc(sizeof(t_btree));
	if (tree)
	{
		tree->item = &item;
		tree->left = 0;
		tree->right = 0;
	}
	return (tree);
}

