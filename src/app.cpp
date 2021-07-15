#include "app.hpp"
#include <exception>
#include <iostream>

using namespace std;

App::App()
{

}

int App::exec()
{
    getInformation();
}

void App::getInformation()
{
    unsigned int temp;
    cout << "----- BehBook -----" << endl;

    cout << "Enter the number of days :" << endl;
    cin >> days;

    cout << "Enter the number of chapters :" << endl;
    cin >> chapters;
	
    cout << "Enter the number of pages per chapter :" << endl;
	
    for (size_t i = 0; i < chapters; i++)
    {
	cout << "Enter pages of the chapter number " << i+1 << " ";
	cin >> temp;
       	if(!pages.insertNode(temp))
	{
	    throw "invalid inputed number";
	}
    }
}
