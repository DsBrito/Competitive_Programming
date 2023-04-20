
#include <iostream>
#include <vector>
#include <algorithm> // for sort method

using namespace std;

void find_cookies(long long C, long long R)
{

    vector<long long> cookies;
    for (long long i = 1; i * i <= C - R; i++)
    {
        // amount of cookies each guest ate should be a C - R divider.
        if ((C - R) % i == 0)
        {
            cookies.push_back(i);
            if (i != (C - R) / i)
            {
                cookies.push_back((C - R) / i);
            }
        }
    }

    sort(cookies.begin(), cookies.end());
    for (long long cookies : cookies)
    {
        if (cookies > R / cookies)
        {
            cout << " " << cookies;
        }
    }
}
int main(int argc, char *argv[])
{
    int N;
    long long Q, R, C;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> C;
        cin >> R;
        if (C == R)
            cout << "Case #" << i + 1 << ": 0" << endl;
        else if (C > R)
        {
            cout << "Case #" << i + 1 << ":";

            find_cookies(C, R);

            cout << endl;
        }
    }
    return 0;
}
