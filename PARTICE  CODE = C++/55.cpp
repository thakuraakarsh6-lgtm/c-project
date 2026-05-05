// wap to program string to date in c++ using std :: get time with std :: tm
#include <iostream>
#include <iomanip>
#include <sstream>
#include <ctime>
using namespace std;

int main()
{
    string dateStr;
    cout << "Enter date (format: DD-MM-YYYY): ";
    cin >> dateStr;

    tm tmDate = {};
    stringstream ss(dateStr);

    
    ss >> get_time(&tmDate, "%d-%m-%Y");

    if(ss.fail())
    {
        cout << "Failed to parse date." << endl;
    }
    else
    {
        cout << "Day: " << tmDate.tm_mday << endl;
        cout << "Month: " << tmDate.tm_mon + 1 << endl; 
        cout << "Year: " << tmDate.tm_year + 1900 << endl; 
    }

    return 0;
}