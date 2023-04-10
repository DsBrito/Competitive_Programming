#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;

    int word_size;
    char word_first;
    char word_last;
    string word;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> word;

        if (word.size() > 10)
        {
            word_size = word.size() - 2; // cout the size of the word
            word_first = word.front();   // keep the first latter of the word
            word_last = word.back();     // keep the last latter of the word

            cout << word_first << word_size << word_last << endl;
        }
        else
        {
            cout << word << endl;
        }
    }
    return 0;
}
