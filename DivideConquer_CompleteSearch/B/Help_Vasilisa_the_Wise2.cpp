#include <cstdio>
using namespace std;

int main() {
    int r1, r2, c1, c2, d1, d2;
    scanf("%d %d %d %d %d %d", &r1, &r2, &c1, &c2, &d1, &d2);

    int a = (d1 - c2 + r1) / 2;
    int b = r1 - a;
    int c = d2 - b;
    int d = r2 - c;

    if (r1 == a + b && r2 == c + d &&
        c1 == a + c && c2 == b + d &&
        d1 == a + d && d2 == b + c &&
        a != b && a != c && a != d && b != c && b != d && c != d &&
        0 < a && a < 10 && 0 < b && b < 10 && 0 < c && c < 10 && 0 < d && d < 10) {
        printf("%d %d\n%d %d\n", a, b, c, d);
    }
    else {
        printf("-1\n");
    }
    return 0;
}