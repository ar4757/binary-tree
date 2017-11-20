/*
 * hw4.h
 *
 *  Created on: Oct 8, 2017
 *      Author: andrewratz
 */

#ifndef HW4_H_
#define HW4_H_

#include <iostream>
#include <cstdio>
using namespace std;

namespace cop3530 {
	template <class T>
	class Binary_Tree {
			struct Node {
			T value;
			Node* left_child;
			Node* right_child;
			//Constructor
			Node();
			Node(T element, Node* left, Node* right) {
				value = element;
				left_child = left;
				right_child = right;
			}
			//Destructor
			~Node() {

			}
		};
	public:
		Node* root;
		Node* current = root;
		//Constructor
		Binary_Tree() {
			root = nullptr;
		}
		//Destructor
		~Binary_Tree() {

		}
		void insert(T element) {
			if (root == nullptr) {
				root = new Node(element, nullptr, nullptr);
				current = root;
				return;
			}
			if (element < current->value) {
				if (current->left_child != nullptr) {
					current = current->left_child;
					insert(element);
				}
				else {
					current->left_child = new Node(element, nullptr, nullptr);
					current = root;
					return;
				}
			}
			else {
				if (current->right_child != nullptr) {
					current = current->right_child;
					insert(element);
				}
				else {
					current->right_child = new Node(element, nullptr, nullptr);
					current = root;
					return;
				}
			}
		}
		void print_preorder() {
			Node* anchor = root;
			Node* iop;
			while (anchor) {
				//if anchor does not have left child
				if (anchor->left_child == nullptr) {
					cout << anchor->value << " ";
					anchor = anchor->right_child;
				}
				//if anchor has left child
				else {
					iop = anchor->left_child;
					//find iop
					while (iop->right_child != anchor && iop->right_child != nullptr) {
						iop = iop->right_child;
					}
					//if iop is threaded to anchor
					if (iop->right_child == anchor) {
						iop->right_child = nullptr;
						anchor = anchor->right_child;
					}
					//if iop is not threaded to anchor
					else {
						cout << anchor->value << " ";
						iop->right_child = anchor;
						anchor = anchor->left_child;
					}
				}
			}
			cout << endl;
		}
		void print_inorder() {
			Node* anchor = root;
			Node* iop;
			while (anchor) {
				//if anchor does not have left child
				if (anchor->left_child == nullptr) {
					cout << anchor->value << " ";
					anchor = anchor->right_child;
				}
				//if anchor has left child
				else {
					iop = anchor->left_child;
					//find iop
					while (iop->right_child != anchor && iop->right_child != nullptr) {
						iop = iop->right_child;
					}
					//if iop is threaded to anchor
					if (iop->right_child == anchor) {
						cout << anchor->value << " ";
						iop->right_child = nullptr;
						anchor = anchor->right_child;
					}
					//if iop is not threaded to anchor
					else {
						iop->right_child = anchor;
						anchor = anchor->left_child;
					}
				}
			}
			cout << endl;
		}
	};
}

#endif /* HW4_H_ */
