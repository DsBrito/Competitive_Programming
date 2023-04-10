#include <cstring>
#include <set>
#include <iostream>
using namespace std;

// vector at 10^9 cause this rule ->  (1 ≤ n ≤ 9) and k (0 ≤ k < 10^n)
long long vec_k[] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};
int main()
{
    int t;
    int n;
    long long k;
    long long result;

    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        while (k / vec_k[n] > 0)
        {
            k /= 10;
        }

        result = k;
        set<long long> set_k;
        while (set_k.count(k) == 0)
        {
            set_k.insert(k);
            k *= k;
            while (k / vec_k[n] > 0)
            {
                k /= 10;
            }
            if (k > result)
                result = k;
        }
        cout << result << endl;
    }
    return 0;
}