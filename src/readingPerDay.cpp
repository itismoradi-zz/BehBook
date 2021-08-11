#include "readingPerDay.hpp"
using namespace std;

ReadingPerDay::ReadingPerDay(unsigned int days) :
    days(days)
{
    chapters = new unsigned int[days + 1];
    index = 0;
    *this << 1;     //always first chapter number is 1
    pages = new unsigned int[days];
}

ReadingPerDay::~ReadingPerDay()
{
    delete pages;
    delete chapters;
}

ReadingPerDay & ReadingPerDay::operator << (unsigned int chapter)
{
    if(index == days)
    {
        throw "invalid use of operator << in ReadingPerDay";
    }

    chapters[index] = chapter;
    index++;
    return *this;
}

// bool ReadingPerDay::operator > (ReadingPerDay & x)
// {
//     if(this->standardDeviation() > x.standardDeviation())     //new state is more than optimal
//     {
//         return true;
//     }
//     else 
//     {
//         return false;
//     }
// }

// void ReadingPerDay::operator = (ReadingPerDay & x)
// {
//     delete [] chapters;
//     chapters = x.getChapters();
//     delete [] pages;
//     pages = x.getPages();
//     days = getDays();
//     index = getIndex();
// }

double ReadingPerDay::standardDeviation()
{
    double avg = 0.0 , sum_deviation = 0.0;

    for(unsigned int i = 0; i < days; i++)  
    {
        avg += pages[i]; 
    }

    avg /= days;

    for(unsigned int i = 0; i < days; i++)
    {
        sum_deviation += pow((pages[i] - avg), 2);
    } 
    
    return sqrt(sum_deviation / days);
}

unsigned int * ReadingPerDay::getChapters()
{
    return chapters;
}

unsigned int * ReadingPerDay::getPages()
{
    return pages;
}

unsigned int ReadingPerDay::getDays()
{
    return days; 
}

unsigned int ReadingPerDay::getIndex()
{
    return index;
}