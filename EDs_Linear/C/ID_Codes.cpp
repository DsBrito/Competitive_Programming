#include <iostream>
#include <cstring>
#include <algorithm> // for sort method

using namespace std;

int main(int argc, char *argv[])
{
    int next_char;
    string code;
    bool successor = false;

    while (cin >> code && code != "#")
    {

        int code_size = code.size();
        for (int i = code_size - 2; i >= 0; i--)
        {
            if (code[i] < code[i + 1])
            {
                successor = true;

                // find the smallest character greater than the swap character
                next_char = i + 1;
                for (int j = i + 2; j < code.size(); j++)
                {
                    if (code[j] > code[i] && code[j] < code[next_char])
                    {
                        next_char = j;
                    }
                }

                // exchange the swap character with the smallest character greater than it
                swap(code[i], code[next_char]);

                // sort characters to the right of the swap character in ascending order
                sort(code.begin() + i + 1, code.end());

                break;
            }
        }

        if (successor)
        {
            cout << code << endl;
        }
        else
        {
            cout << "No Successor" << endl;
        }
    }
    return 0;
}