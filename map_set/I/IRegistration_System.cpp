#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> mymap;

    int lines = 0;
    string name;
    cin >> lines;

    for (int i = 0; i < lines; i++)
    {
        cin >> name;

        if (mymap[name] > 0)
        {
            cout << name << mymap[name] << endl;
            mymap[name]++;
        }
        else
        {
            mymap[name] = 1;
            cout << "OK" << endl;
        }
    }

    return 0;
}
