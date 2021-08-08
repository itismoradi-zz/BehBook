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
    for (size_t i = 1 ; i <= *chapters ; i++)
    {
        for (int e = i+1 ; e <= (*chapters +1) ; e++)
        {
            unsigned int sum = 0 ;
            for (int m = i ; m<e ; m++)
            {
                sum+=ChaptersPages->at(m-1);
            }
            list[i-1].insertNode(e,sum);
        }
    }
}