
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{

    int num, num1, num2;
    cin >> num;
    if (num < 15)
    {
        for (int i = 0; i < num; i++)
        {

            cin >> num1;
            cin >> num2;
            if (num1 == num2)
            {
                cout << "=" << endl;
            }

            if (num1 < num2)
            {
                cout << "<" << endl;
            }
            if (num1 > num2)
            {
                cout << ">" << endl;
            }
        }
    }
    return 0;
}