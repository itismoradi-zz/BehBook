#ifndef READING_PER_DAY_IG
#define READING_PER_DAY_IG

#include <cmath>

/*
    This class compares each mode of graph traversal in book chapters
    with the mode previously stored in it
    It takes a standard deviation from the set of pages it should read per day,
    and if it is less than the previous mode, the new mode is more optimal,
    so it replaces it.
*/

class ReadingPerDay
{
    public:
        ReadingPerDay(unsigned int);
        ~ReadingPerDay();
        ReadingPerDay & operator << (unsigned int);
       // bool operator > (ReadingPerDay &);
        //void operator = (ReadingPerDay &);
        double standardDeviation();
        unsigned int * getChapters();
        unsigned int * getPages();
        unsigned int getDays();
        unsigned int getIndex();
    private:
        //dynamic arrays
        unsigned int * chapters;         //capters traversal number
        unsigned int * pages;   //number of pages read per each day
        unsigned int days;
        unsigned int index;     //first empty house after full houses of chapters dynamic array
};

#endif
