// Lists_and_BinarySearchTrees.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "BST.h"

int main()
{	
	BST tree;
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
	tree.rem(i);
	tree.preorder();
	_getch();
    return 0;
}