#include "graph.hpp"
#include <iostream>
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
    unsigned int lastChapter = *chapters;

    for (size_t i = 1 ; i <= lastChapter ; i++)
    {
        for (size_t e = i+1 ; e <= (lastChapter +1) ; e++)
        {
            unsigned int sum = findPagesBetweenTwoChapters(i, e);
            list[i-1].insertNode(e, sum);
        }
        // cout << endl;
    }

    //set last linked list
    //The only vertex adjacent to the last node is the final node(-1)
}

ReadingPerDay & Graph::operator ~ ()
{
    return reading;
}

unsigned int Graph::findPagesBetweenTwoChapters(int chapter1, int chapter2) const
{
    /*  
        in this graph, the pages read in going from chapter 3 to 7 
        are the pages of chapters 3, 4, 5 and 6,
        and 7 itself is not calculated
    */

    //if book last chapter is 8 then last node in abstract graph is 9
    if(chapter1 > chapter2  || chapter1 <= 0 || chapter2 <= 0)
    {
        //chapter1 and chapter2 parameter begins from 1 because they are book chapters numbers
        //no chapters index in vector
        throw "invalid inputed argument!!!";
    }

    unsigned int pages = 0;

    for(size_t i = (chapter1 - 1); i < (chapter2 - 1); i++)
    {
        pages += ChaptersPages->at(i);
    }
    
    return pages;
}

void Graph::findOptimal()
{
    cout << "List of adjacent graphs for reading book chapters" << endl;

    //function to traversal graph and find the most optimal book reading
    for(size_t i = 0; i < (*chapters); i++)
    {
        traversal(list + i, i+1);
    }

    cout << endl;

    //cout << list[*chapters - 1].getNode(5)->chapterNumber << endl;
}

void Graph::traversal(LinkedList * l, unsigned int num)
{
    Node * node;

    cout << "# chapter " << num << "  ------->  ";

    while((node = l->getNotVisitedNode()) != nullptr)
    {
        traversal(node);
    }

    cout << endl;
}

void Graph::traversal(Node * node)
{
    //recursive function base case
    //if(this->reading->getIndex() == *days)
    {

    }

    cout << node->chapterNumber << " : " << node->pagesPerDay << " | ";

    unsigned int ch = node->chapterNumber;
    unsigned int p = node->pagesPerDay;

    try
    {
        //reading << ch;
    }
    catch(...)
    {
        
    }
}