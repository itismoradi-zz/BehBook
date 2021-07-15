#ifndef APP_IG
#define APP_IG

#include "linkedList.hpp"

class App
{
    public:
        App();
        int exec();
        void getInformation();
    private:
        bool status;
        unsigned int days;
        unsigned int chapters;
        LinkedList pages;
};

#endif
