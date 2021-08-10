#include "linkedList.hpp"
#include <exception>

using namespace std;

bool LinkedList::isEmpty()
{
    return (head == nullptr);
}   

void LinkedList::insertNode(unsigned int x ,unsigned int y)
{
    if(isEmpty())
    {
        head = new Node;
        head->chapterNumber = x;
        head->pagesPerDay = y;
        head->next = nullptr;
        return;
    }

    Node * current = this->head;
    
    while(current->next != nullptr)
    {
        current = current->next;
    }
    
    try
    {
        current->next = new Node;
        current->next->chapterNumber = x;
        current->next->pagesPerDay = y;
        current->next->next = nullptr;
    }
    catch(...)
    {
        throw "Error!!!";
    }
}

Node * LinkedList::getNode(unsigned int nodeNumber)
{
    Node * current = this->head;

    while(current->chapterNumber != nodeNumber)
    {
        current = current->next;
    }

    return current;
}