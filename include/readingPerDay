#ifndef READING_PER_DAY_IG
#define READING_PER_DAY_IG

struct ReadingPerDay
{
    //dynamic arrays
    int * chapters;
    unsigned int * pages;
    
    ReadingPerDay(unsigned int days)
    {
        chapters = new int[days + 1];
        pages = new unsigned int[days];
    }
    ~ReadingPerDay()
    {
        delete pages;
        delete chapters;
    }
};

#endif
