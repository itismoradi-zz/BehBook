#include "app.hpp"
#include "linkedList.hpp"

App::App()
{

}

App::exec()
{
    int days, chapters, temp;

	cout<<"Enter the number of days :"<<endl;
	cin>>days;

	cout<<"Enter the number of chapters :"<<endl;
	cin>>chapters;

    cout<<"Enter the number of pages per chapter :"<<endl;
	for (size_t i = 0; i < chapters; i++)
	{
		cin>>temp;
        insertNode(temp);
	}
    
    // ...
}
