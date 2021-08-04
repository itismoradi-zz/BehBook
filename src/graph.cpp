#include "graph.hpp"
using namespace std;

Graph::Graph(unsigned int * days, unsigned int * chapters, unsigned int * averageChapterPages,
             vector<unsigned int> * ChaptersPages) :
    days(days),
    chapters(chapters),
    averageChapterPages(averageChapterPages),
    ChaptersPages(ChaptersPages),
    reading(*days)
{
    //create dynamic array for graph proximity list
    list = new LinkedList[*chapters];
    enterData();
}

void Graph::enterData()
{

}