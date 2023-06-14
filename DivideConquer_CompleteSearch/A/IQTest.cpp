#include <iostream>
#include <cstring>

using namespace std;

int main()
{

	char a[5][5];
	int i, k, j, state_color = 0;
	int c_velha, c_ponto;

	for (k = 0; k < 4; k++)
		scanf("%s", a[k]);

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			c_velha = 0;
			c_ponto = 0;

			if (a[i][j] == '#')
				c_velha++;
			else
				c_ponto++;

			if (a[i][j + 1] == '#')
				c_velha++;
			else
				c_ponto++;

			if (a[i + 1][j] == '#')
				c_velha++;
			else
				c_ponto++;

			if (a[i + 1][j + 1] == '#')
				c_velha++;
			else
				c_ponto++;

			if (c_velha >= 3 || c_ponto >= 3)
			{
				state_color = 1;
				break;
			}
		}
		if (state_color)
			break;
	}
	if (state_color)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}