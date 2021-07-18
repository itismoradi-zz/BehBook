#include "app.hpp"
#include <exception>
#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

App::App()
{
    splashScreen();
}

void App::splashScreen()
{
    cout << "-----------------------\n"
            "|          |          |\n"
            "| -------- | -------- |\n"
            "|          |          |\n"
            "| -------- | -------- |\n"
            "|          |          |\n"
            "| -------- | -------- |\n"
            "-----------------------\n"
             "        BehBook\n" << endl;

    cout << "We help you read a book with multiple chapters optimally\n" << endl;
}

int App::exec()
{
    getInformation();
    calculateAvg();
    print();
}

void App::getInformation()
{
    unsigned int temp;

    try
    {
        cout << ">> Enter the number of days : ";
        cin >> days;

        cout << ">> Enter the number of chapters : ";
        cin >> chapters;

        checkInputs();

        cout << "\n>> Enter the number of pages per chapter :" << endl;
        
        for (size_t i = 0; i < chapters; i++)
        {   
            cout << "    >> chapter " << i+1 << " ---> ";
            cin >> temp;
            ChaptersPages.push_back(temp);
        }
    }
    catch(const char * message)
    {
        cerr << message << endl;
        abort();
    }

    cout << endl;
}

void App::print() const
{
    cout << "!!! BehBook suggests reading your book optimally like this :" << endl;
    cout << "    * Average reading of book pages per day : " << averageChapterPages << endl;
    
    for(size_t i = 0; i< days; i++)
    {
        cout << "    * day " << i + 1 << " reading captures :  " << endl;
    }
}

void App::checkInputs() const
{
    if(chapters < 3)
    {
        throw "chapters must be greater than 2";
    }
    if(days < 2)
    {
        throw "chapters must be greater than 1";
    }
    if(days > chapters)
    {
        throw "days must be less than chapters";
    }
}

void App::calculateAvg()
{
    unsigned int sum = 0;

    for(const unsigned int & item : ChaptersPages)
    {
        sum += item;
    }

    averageChapterPages = sum / chapters; 
}

float standardDeviation(float data[], int n)
{
    float mean=0.0 , sum_deviation=0.0;
    for(i=0; i<n;++i)  mean+=data[i]; 
    mean=mean/n;
    for(i=0; i<n;++i) sum_deviation+=(data[i]-mean)*(data[i]-mean);
    return sqrt(sum_deviation/n);
}
