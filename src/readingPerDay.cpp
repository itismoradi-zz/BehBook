#include "readingPerDay.hpp"
using namespace std;

ReadingPerDay::ReadingPerDay(unsigned int days) :
    days(days)
{
    chapters = new int[days + 1];
    *this << 1;     //always first capter number is 1
    index = 1;
    pages = new unsigned int[days];
}

ReadingPerDay::~ReadingPerDay()
{
    delete pages;
    delete chapters;
}

ReadingPerDay & ReadingPerDay::operator << (int chapter)
{
    size_t index = 0;

   // while()
    {
        
    }
    
}

bool ReadingPerDay::operator > (ReadingPerDay & x)
{
    if(this->standardDeviation() > x.standardDeviation())     //new state is more than optimal
    {
        return true;
    }
    else 
    {
        return false;
    }
}

void ReadingPerDay::operator = (ReadingPerDay & x)
{

}

double ReadingPerDay::standardDeviation()
{
   // if()
    {

    }
    
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

int * ReadingPerDay::getChapters()
{
    return chapters;
}

unsigned int * ReadingPerDay::getPages()
{
    return pages;
}