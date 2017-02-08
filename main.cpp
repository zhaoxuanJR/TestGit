#include <iostream>
using namespace std;

void windows()
{
	cout<<"This is windows Os"<<endl;
}

void mac_master()
{
    cout<<"This is mac master"<<endl;
}

void windows_master()
{
	cout<<"This is a windows_master"<<endl;
}

void windows_branch()
{
	cout<<"This is a windows_branch"<<endl;
}

int main()
{
    cout << "Hello, World!" <<endl;
    windows();
    mac_master();
    windows_master();
 	windows_branch();
    return 0;
}