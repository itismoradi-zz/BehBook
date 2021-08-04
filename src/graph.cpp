#include "graph.hpp"

Graph::Graph(unsigned int * days, unsigned int * chapters, unsigned int * averageChapterPages, std::vector<unsigned int> * ChaptersPages) :
    days(days),
    chapters(chapters),
    averageChapterPages(averageChapterPages),
    ChaptersPages(ChaptersPages),
    reading(days)
{
    //create dynamic array for graph proximity list
    list = new LinkedList[chapters];
    enterData();
}
