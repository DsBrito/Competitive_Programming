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
using namespace std;

// 2 arrays for compare the diff
int integer_array[3000];

int integer_diff[2999];

int main(int argc, char *argv[])
{

    int integer_num;
    int integer_abs;
    int inc;

    while (!(cin >> integer_num).eof())
    {

        for (inc = 0; inc < integer_num; inc++)
        {
            cin >> integer_array[inc];
        }

        // memset(integer_diff, 0, sizeof(integer_diff)); // initialize the diff with 0 value for each loop
        for (inc = 1; inc < integer_num; inc++)
            integer_diff[inc] = 0;

        for (inc = 0; inc < integer_num - 1; inc++)
        {
            integer_abs = abs(integer_array[inc] - integer_array[inc + 1]);

            if ((integer_abs < 1) || (integer_abs > integer_num - 1) || (integer_diff[integer_abs] == 1))
            {
                cout << "Not jolly" << endl;
                break;
            }
            integer_diff[integer_abs] = 1;
        }

        if (inc == integer_num - 1)
        {
            cout << "Jolly" << endl;
        }
    }

    return 0;
}