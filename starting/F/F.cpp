#include <iostream>
using namespace std;

int main()
{
    int N;

    double average = 0;
    int day;
    int status = 0;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> day;
        status += day;
    }

    average = (double)status / N;

    if (average < 0)
        cout << ":(" << endl;
    else if (average == 0)
        cout << ":|" << endl;
    else
        cout << ":)" << endl;
    return 0;
}
