#include "linkedList.hpp"
#include <exception>

using namespace std;

bool LinkedList::isEmpty()
{
    return (head == nullptr);
}   

bool LinkedList::insertNode(unsigned int x)
{
    Node * current = this->head;
    
    while(current->next != nullptr)
    {
        current = current->next;
    }
    
    try
    {
        current->next = new Node;
        current->next->data = x;
        current->next->next = nullptr;
    }
    catch(...)
    {
        return false;
    }

    return true;
}

bool LinkedList::findNode(unsigned int x)
{
    Node * currentNode = this->head;

    while(currentNode != nullptr)
    {
        if(currentNode->data == x)
        {
            return true;
        }

        currentNode = currentNode->next;
    }

    return false;
}

bool LinkedList::removeNode(unsigned int x)
{
    if(isEmpty())
    {
        throw "Linked List is Empty";
    }

    if(head->data == x)
    {
        Node * temp = head->next;
        delete head;
        head = temp;
        return true;
    }

    Node * prevNode = this->head;
    Node * currentNode = this->head->next;

    while(currentNode != nullptr)
    {
        if(currentNode->data == x)
        {
            prevNode->next = currentNode->next;
            delete currentNode;
            return true;
        }

        currentNode = currentNode->next;
        prevNode = prevNode->next;
    }

    return false;
}