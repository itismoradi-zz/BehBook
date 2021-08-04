#ifndef GRAPH_IG
#define GRAPH_IG

#include "linkedList.hpp"
#include "readingPerDay.hpp"
#include <vector>

class Graph
{
    public:
        Graph(unsigned int *, unsigned int *, unsigned int *, std::vector<unsigned int> *);
    private:
        LinkedList * list;
        ReadingPerDay reading;
        unsigned int * days;
        unsigned int * chapters;
        unsigned int * averageChapterPages;
        std::vector<unsigned int> * ChaptersPages;
    
        void enterData();
};

#endif
