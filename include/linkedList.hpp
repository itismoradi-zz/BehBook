#ifndef LINKEDLIST_IG
#define LINKEDLIST_IG

#include "node.hpp"

class linkedList
{
    private :
        Node * head;
    public :
        bool InsertNode(unsigned int);
        bool removeNode(unsigned int);
        bool  FindNode(unsigned int);
        bool IsEmpty();
}

#endif
