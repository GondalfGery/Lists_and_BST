// Lists_and_BinarySearchTrees.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "AVL.h"

int main()
{	
	AVL tree;
	while (true)
	{
		int i;
		std::cin >> i;
		if (i == -1)
			break;
		tree.addElem(i);
	}
	int i;
	std::cin >> i;
	//tree.removeByValue(i);
	tree.preorder();
	printf("\n%d\n",tree.isSubTreeAVL(tree.getRoot()));
	_getch();
    return 0;
}