#ifndef LINKEDLIST_IG
#define LINKEDLIST_IG

#include "node.hpp"

class LinkedList
{
    private :
        Node * head = nullptr;
    public :
        bool isEmpty();
        void insertNode(int ,unsigned int);
};

#endif
