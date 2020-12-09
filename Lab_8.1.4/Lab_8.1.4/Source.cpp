#include <iostream>
#include <string>
using namespace std;


string change(string& str)
{
    if (str.length() < 3)
    {
        cout << "Write more characters" << endl;
        return str;
    }
    while (str.find("***") != -1)
        str = str.replace(str.find("***"), 3, "!!");
    return str;
}


int main()
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);
    cout << endl;

    if (str.find("***") != -1)
        cout << "There is a group of three neighbour stars" << endl;
    else
        cout << "There is NOT any group of three neighbour stars" << endl;

    cout << endl;
    change(str);
    cout << str << endl;
}