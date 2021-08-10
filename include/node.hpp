#ifndef NODE_IG
#define NODE_IG

class Node
{
    public:
        int chapterNumber;
        unsigned int pagesPerDay;
        bool visited; 
        Node * next = nullptr;
};

#endif
