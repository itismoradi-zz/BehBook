#ifndef LINKEDLIST_IG
#define LINKEDLIST_IG

#include "node.hpp"

class linkedList
{
    private :
        Node * head = nullptr;
    public :
        bool insertNode(unsigned int);
        bool removeNode(unsigned int);
        bool  findNode(unsigned int);
        bool isEmpty();
}

#endif
