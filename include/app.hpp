#ifndef APP_IG
#define APP_IG

#include <vector>
#include "graph.hpp"

class App
{
    public:
        App();
        void splashScreen();
        int exec();
        void getInformation();
        void print() const;
        void checkInputs() const;
        void calculateAvg();
    private:
        unsigned int days;
        unsigned int chapters;
        unsigned int averageChapterPages;
        std::vector<unsigned int> ChaptersPages;
        Graph graph;
};

#endif
