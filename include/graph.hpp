#ifndef GRAPH_IG
#define GRAPH_IG

#include "linkedList.hpp"
#include "readingPerDay.hpp"
#include <vector>

class Graph
{
    public:
        Graph(unsigned int *, unsigned int *, unsigned int *, std::vector<unsigned int> *);
        ReadingPerDay & operator ~ ();
        void findOptimal();
    private:
        LinkedList * list;
        ReadingPerDay reading;
        unsigned int * days;
        unsigned int * chapters;
        unsigned int * averageChapterPages;
        std::vector<unsigned int> * ChaptersPages;
        void enterData();
        unsigned int findPagesBetweenTwoChapters(int, int) const;
        void traversal(LinkedList *, unsigned int);
        void traversal(Node *);
};

#endif
