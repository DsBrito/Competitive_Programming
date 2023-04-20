/*

1 4 2 3
x-y = z
1-4 = 3
4-2 = 2
2-3=1




A diferença absoluta de dois números reais x, y é dada por | x - y |, o valor absoluto da sua diferença [1][2][3].
Diferença absoluta entre x e y

Descreve a distância sobre a linha real entre os pontos correspondentes ao x e y.
É um caso especial do espaço Lp para todos 1 ≤ p ≤ ∞ e
é a métrica padrão usada para ambos conjuntos de números racionais Q {\mathbb {Q}}\,
e as suas conclusões, o conjunto de números reais R {\mathbb {R}}\,.[4]

Como em qualquer métrica, as propriedades métricas apoiam que:

    |x − y| ≥ 0, já que o valor absoluto é sempre não-negativo.
    |x − y| = 0   se, e somente se,   x = y.
    |x − y| = |y − x|    (simetria ou comutatividade).
    |x − z| ≤ |x − y| + |y − z|     (desigualdade triangular), no caso de a diferença absoluta, a igualdade é apoiada se, e somente se, x ≤ y ≤ z.

*/

// https://www.udebug.com/UVa/10038
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

bool parity_property(int matriz_size, const vector<vector<int>> &matriz, vector<int> i_count, vector<int> j_count)
{

    // Calculate the sum of each line and column
    for (int i = 0; i < matriz_size; i++)
    {
        for (int j = 0; j < matriz_size; j++)
        {
            i_count[i] += matriz[i][j];
            j_count[j] += matriz[i][j];
        }
    }

    // Check if all line and column sums are even
    for (int i = 0; i < matriz_size; i++)
    {
        if (i_count[i] % 2 != 0 || j_count[i] % 2 != 0)
        {
            return false;
        }
    }

    return true;
}

int main(int argc, char *argv[])
{
    int matriz_size, num1, num2, num3;
    int i_count = 0, j_count = 0;
    bool state_changed;
    int print_line, print_colum;

    while (cin >> matriz_size && matriz_size != 0)
    {
        // int matriz[matriz_size][matriz_size];
        vector<vector<int>> matriz(matriz_size, vector<int>(matriz_size, 0));
        vector<int> i_count(matriz_size, 0);
        vector<int> j_count(matriz_size, 0);

        for (int i = 0; i < matriz_size; i++)
        {
            for (int j = 0; j < matriz_size; j++)
            {
                cin >> matriz[i][j];
            }
        }
        // count for check the parity
        if (parity_property(matriz_size, matriz, i_count, j_count))
        {
            cout << "OK" << endl;
        }
        else
        {
            // need initialize state_changed = false for each matriz
            state_changed = false;
            // Try changing one bit to satisfy parity
            for (int i = 0; i < matriz_size && !state_changed; i++)
            {
                for (int j = 0; j < matriz_size && !state_changed; j++)
                {
                    matriz[i][j] = !matriz[i][j];
                    if (parity_property(matriz_size, matriz, i_count, j_count))
                    {
                        state_changed = true;
                        print_line = i;
                        print_colum = j;
                    }
                    matriz[i][j] = !matriz[i][j];
                }
            }

            // Output result
            if (state_changed)
            {
                cout << "Change bit (" << print_line + 1 << "," << print_colum + 1 << ")" << endl;
            }
            else
            {
                cout << "Corrupt" << endl;
            }
        }
    }
    return 0;
}