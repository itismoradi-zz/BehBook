#ifndef READING_PER_DAY_IG
#define READING_PER_DAY_IG

#include <cmath>

struct ReadingPerDay
{
    //dynamic arrays
    int * chapters;
    unsigned int * pages;
    unsigned int days;
    
    ReadingPerDay(unsigned int days) :
        days(days)
    {
        chapters = new int[days + 1];
        pages = new unsigned int[days];
    }
    ~ReadingPerDay()
    {
        delete pages;
        delete chapters;
    }
    double standardDeviation()
    {
        double avg = 0.0 , sum_deviation = 0.0;

        for(unsigned int i = 0; i < days; i++)  
        {
            avg += pages[i]; 
        }

        avg /= days;

        for(unsigned int i = 0; i < days; i++)
        {
            sum_deviation += std::pow((pages[i] - avg), 2);
        } 
        
        return std::sqrt(sum_deviation / days);
    }
};

#endif
