#include <stdlib.h>
#include "ft_btree.h"

void	bree_insert_data(tree **root, void *item, int (*cmpf)(void *, void *))
{
	if (root == NULL)
		*root->left = btree_create_node(item);
	if ((*cmpf(*root->item, item) < 0))
		btree_insert_data(&(*root)->right, item, cmpf);
	else
		btree_insert_data(&(*root)->left, item, cmpf);

}
