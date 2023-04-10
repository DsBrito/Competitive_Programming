
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num_k;
    int n, m;
    int x, y;
    int distance_xn, distance_ym;
    while (cin >> num_k)
    {
        if (num_k == 0)
            break;
        cin >> n >> m;
        while (num_k--)
        {
            cin >> x >> y;

            distance_xn = x - n;
            distance_ym = y - m;

            if (distance_xn == 0 || distance_ym == 0)
                cout << "divisa" << endl;
            else if (distance_xn > 0 && distance_ym > 0)
                cout << "NE" << endl;
            else if (distance_xn > 0 && distance_ym < 0)
                cout << "SE" << endl;
            else if (distance_xn < 0 && distance_ym > 0)
                cout << "NO" << endl;
            else if (distance_xn < 0 && distance_xn < 0)
                cout << "SO" << endl;
        }
    }
    return 0;
}
