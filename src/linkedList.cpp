#include "linkedList.hpp"
#include <iostream>
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
        this->size += 1;
        // cout << " " << x << " p: " << y << " / ";
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

        if(!current)
        {
            break;
        }
    }

    if(current)
    {
        return current;
    }
    else
    {
        throw "! can not find node!";
    }
}

Node * LinkedList::getNotVisitedNode()
{
    Node * current = this->head;

    while(current->visited != false)
    {
        current = current->next;

        if(!current)
        {
            break;
        }
    }

    if(current)
    {
        current->visited = true;
        return current;
    }
    else
    {
        return nullptr;
    }
}

void LinkedList::resetVisit()
{
    if(isEmpty())   return;

    Node * current = this->head;
    
    while(current->next != nullptr)
    {
        current->visited = false;
        current = current->next;
    }

    current->visited = false;
}

unsigned int LinkedList::getSize()
{
    return this->size;
}