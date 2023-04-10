/*
To form a rectangle with sides of length L and width W, we need to have at least L * W squares.
So if the total number of squares that Byteman has is less than L * W,
then we will not be able to form a rectangle with these dimensions.

The algorithm starts iterating over all possible lengths (from 1 to N),
and then, for each length, it iterates over all possible widths (from 1 to the current length).

For each (length, width) pair, the algorithm checks if the product length * width is less than or equal to N.
If it is, that means we can form a rectangle with those dimensions using the squares that Byteman has,
so we increment our count by possible rectangles in 1.
*/

#include <iostream>
using namespace std;

int main()
{
    int N;

    // variable about the rectangle
    int rectangle_count = 0;
    int rectangle_lenght;
    int rectangle_width;

    cin >> N;

    // the first loop run all lenght of rectangle possible
    for (rectangle_lenght = 1; rectangle_lenght <= N; rectangle_lenght++)
    {
        // the second loop run all width of rectangle possible
        for (rectangle_width = 1; rectangle_width <= rectangle_lenght; rectangle_width++)
        {
            // number of sides (lenght*width) less than N = a rectangle with this dimensions
            if (rectangle_lenght * rectangle_width <= N)
            {
                rectangle_count++;
            }
            else
            {
                break;
            }
        }
    }

    cout << rectangle_count << endl;

    return 0;
}
