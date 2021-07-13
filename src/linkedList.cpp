#include "linkedList.hpp"

bool linkedList::IsEmpty()
{
    return (head->next == null);
}   

Node* linkedList::InsertNode(int index, double x) 
{
    if (index < 0) return NULL;

    int currIndex = 1;
    Node* currNode = head;
    
    while (currNode && index > currIndex) {
        currNode = currNode->next;
        currIndex++;
    }
    if (index > 0 && currNode == NULL) return NULL;
    Node* newNode = new Node;
    newNode->data = x;
    
    if (index == 0) {
        newNode->next = head;
        head = newNode;
    }
    else {
        newNode->next = currNode->next;
        currNode->next = newNode;
    }
    return newNode;
}
//////////////////////////////////////////////////////////

int linkedList::FindNode(double x)
{
    Node* currNode = head;
    int currIndex = 1;
    while (currNode && currNode->data != x) {
        currNode = currNode->next;
        currIndex++;
    }
    if (currNode) return currIndex;
    return 0;
}

//////////////////////////////////////////////////////////

int linkedList::removeNode(double x) {
    Node* prevNode = NULL;
    Node* currNode = head;
    int currIndex = 1;
    while (currNode && currNode->data != x) {
        prevNode = currNode;
        currNode = currNode->next;
        currIndex++;
    }
    if (currNode) {
        if (prevNode) {
            prevNode->next = currNode->next;
            delete currNode;
        }
        else {
            head = currNode->next;
            delete currNode;
        }
        return currIndex;
    }
    return 0;
}
//////////////////////////////////////////////////////////
