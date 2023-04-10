#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int book, box;
    int min_box;

    cin >> book;
    cin >> box;

    min_box = ceil((double)book / (double)box); // round up
    cout << min_box << endl;

    return 0;
}
