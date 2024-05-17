/*
List.h
Purpose: This is a header file for the list class template
Author: Esteban Ramirez
Date: December 4th 2022
*/

#pragma once
using namespace std;

template <class T>
class ListNode
{
public:

	// Constructor
	ListNode(T nodeValue)
	{
		value = nodeValue;
		next = nullptr;
	}

	T value;
	ListNode<T>* next;
};

template <class T>
class LinkedList
{
private:
	ListNode<T>* head;

public:

	// Constructor
	LinkedList()
	{
		head = nullptr;
	}
	~LinkedList();

	// Member functions
	void appendNode(T);
	void deleteNode(T);
	void displayList() const;
};


// Funtion that appends a node
template<class T>
void LinkedList<T>::appendNode(T newValue)
{
	ListNode<T>* newNode;
	ListNode<T>* nodePtr;

	// Allocate a new node in memory and store the new value
	newNode = new ListNode<T>(newValue);

	// If there are no nodes in the lists, newNode will be the first one.
	if (!head)
		head = newNode;
	else
	{
		nodePtr = head;

		while (nodePtr->next)
			nodePtr = nodePtr->next;
		nodePtr->next = newNode;
	}
}


// Function that displays the content of the list
template <class T>
void LinkedList <T>::displayList() const
{
	ListNode<T>* nodePtr;
	nodePtr = head;

	while (nodePtr)
	{
		cout << nodePtr->value << endl;
		nodePtr = nodePtr->next;
	}
}

// Function that deletes a node
template<class T>
void LinkedList<T>::deleteNode(T searchValue)
{
	// Travel through the list
	ListNode<T>* nodePtr;

	// Point to the previous node
	ListNode<T>* previousNode = NULL;

	if (!head)
		return;

	if (head->value == searchValue)
	{
		nodePtr = head->next;
		delete head;
		head = nodePtr;
	}
	else
	{
		nodePtr = head;

		while (nodePtr != nullptr && nodePtr->value != searchValue)
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}
		if (nodePtr)
		{
			previousNode->next = nodePtr->next;
			delete nodePtr;
		}
	}
}

// Destructor
template <class T>
LinkedList <T> ::~LinkedList()
{
	ListNode<T>* nodePtr;
	ListNode<T>* nextNode;

	// nodePtr points to the head of the list
	nodePtr = head;

	while (nodePtr != nullptr)
	{
		nextNode = nodePtr->next;

		// Delete current node
		delete nodePtr;

		// Position nodePtr to the next node
		nodePtr = nextNode;
	}
}