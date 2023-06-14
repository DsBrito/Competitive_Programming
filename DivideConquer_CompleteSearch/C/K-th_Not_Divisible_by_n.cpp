#include <iostream>
#include <cstring>

using namespace std;

int main()
{

	int t,k,n;

    cin >> t;


	for (int i = 0; i < t; i++){

		scanf("%d", &n);
		scanf("%d", &k);

        int k_num = k/(n-1);
        int k_resto = k%(n-1);
        
        if(k_resto !=0)
            cout << (k_num* n) + k_resto << endl;
        
        else{
            cout << (k_num* n)-1 << endl;
        }
    }
	return 0;
}