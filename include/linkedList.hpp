#ifndef LINKEDLIST_IG
#define LINKEDLIST_IG

#include "node.hpp"

class LinkedList
{
    private :
        Node * head = nullptr;
        unsigned int size = 0;
    public :
        bool isEmpty();
        void insertNode(unsigned int ,unsigned int);
        Node * getNode(unsigned int);
        Node * getNotVisitedNode();
        void resetVisit();
        unsigned int getSize();
};

#endif
