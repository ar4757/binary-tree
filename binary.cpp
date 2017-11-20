/*
 * hw4.cpp
 *
 *  Created on: Oct 8, 2017
 *      Author: andrewratz
 */

#include <iostream>
#include "hw4.h"

using namespace std;
using namespace cop3530;

int main() {

	cout << "-----Int Binary Tree-----" << endl;
	Binary_Tree<int>* int_Binary_Tree = new Binary_Tree<int>;
	int_Binary_Tree->insert(6);
	int_Binary_Tree->insert(7);
	int_Binary_Tree->insert(2);
	int_Binary_Tree->insert(1);
	int_Binary_Tree->insert(3);
	int_Binary_Tree->insert(4);
	int_Binary_Tree->insert(9);
	cout << "          6" << endl;
	cout << "     2         7" << endl;
	cout << "   1   3         9" << endl;
	cout << "         4" << endl << endl;
	cout << "-----Preorder-----" << endl;
	int_Binary_Tree->print_preorder();
	cout << "-----Inorder-----" << endl;
	int_Binary_Tree->print_inorder();

	cout << "-----Char Binary Tree-----" << endl << endl;
	Binary_Tree<char>* char_Binary_Tree = new Binary_Tree<char>;
	char_Binary_Tree->insert('D');
	char_Binary_Tree->insert('B');
	char_Binary_Tree->insert('F');
	char_Binary_Tree->insert('A');
	char_Binary_Tree->insert('C');
	char_Binary_Tree->insert('E');
	char_Binary_Tree->insert('G');
	cout << "          D" << endl;
	cout << "      B       F" << endl;
	cout << "    A   C   E   G" << endl;
	cout << "-----Preorder-----" << endl;
	char_Binary_Tree->print_preorder();
	cout << "-----Inorder-----" << endl;
	char_Binary_Tree->print_inorder();
}























