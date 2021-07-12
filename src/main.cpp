//  BehBook
//  A program for better reading of books on certain days
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Node {
public:
	int data;
	Node* next;
};

// This function prints contents of linked list

void printList(Node* n)
{
	while (n != NULL) {
		cout << n->data << " ";
		n = n->next;
	}
}

// main function
int main()
{

	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;

	// allocate 3 nodes in the heap
	head = new Node();
	second = new Node();
	third = new Node();

	head->data = 1; 		// assign data in first node
	head->next = second;    // Link first node with second

	second->data = 2; 		// assign data to second node
	second->next = third;

	third->data = 3; 		// assign data to third node
	third->next = NULL;

	printList(head);

	return 0;
}

// This is code is contributed by rathbhupendra


//Data Structures and Algorithms Course
//Final Project
//at BuAli Sina university of Hamedan
//coders : Mohammad Moradi, Erfan Ghaem Panah
//summer 2021
