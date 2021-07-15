#include "linkedList.hpp"
#include <exception>

using namespace std;

bool LinkedList::isEmpty()
{
    return (head->next == nullptr);
}   

bool LinkedList::insertNode(unsigned int x)
{
    Node * current = this->head;
    
    while(current->next != nullptr)
    {
        current = current->next;
    }
    
    current->next = new Node;
    current->next->data = x;
    current->next->next = nullptr;
}

bool LinkedList::findNode(unsigned int x)
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

bool LinkedList::removeNode(unsigned int x) {
    Node* prevNode = nullptr;
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
