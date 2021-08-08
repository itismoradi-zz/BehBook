#include "linkedList.hpp"
#include <exception>

using namespace std;

bool LinkedList::isEmpty()
{
    return (head == nullptr);
}   

void LinkedList::insertNode(int x ,unsigned int y)
{
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