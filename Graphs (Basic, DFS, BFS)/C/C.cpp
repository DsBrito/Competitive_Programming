/*
1- Primeiro, para cada aluno, Anna descobre a quais outros alunos ele está vinculado.
2- Se um aluno está vinculado a exatamente um outro aluno, Anna o repreende.
3- Então Maria reúne em um único grupo todos os alunos que acabaram de ser repreendidos.
4- Ela os expulsa do clube. Este grupo de alunos sai imediatamente do clube
5- Esses alunos levam consigo os cadarços que os amarravam.
6- Então, novamente, para cada aluno, Anna descobre a quantos outros alunos ele está vinculado e assim por diante. 
7- E eles fazem isso até que Anna possa repreender pelo menos um aluno.


Entrada:
    A primeira linha contém dois inteiros n e m — o número inicial de alunos e rendas ( ). 
    Os alunos são numerados de 1 a n , e os cadarços são numerados de 1 a m . 
    As próximas m linhas contêm, cada uma, dois inteiros a e b — o número de alunos empatados pela i -ésima renda ( 1 ≤  a ,  b  ≤  n ,  a  ≠  b ). 
    É garantido que não haja dois alunos empatados com mais de um cadarço. 
    Nenhuma renda amarra um aluno a si mesmo
*/

#include <iostream>
#include <vector>
#include <map>
#include <list>

using namespace std;

map <int, vector<int>>graph;
int neib[105];

int BFS(int n){
    bool erase = true;
    int sum =0;
    list<int>queue;

    while(erase){
        erase = false;

        for(int i =1; i<=n;i++){
            if(neib[i] == 1){
                queue.push_back(i);
                erase = true;
            }
        }
        if(erase) sum++;

        while (!queue.empty()){
            int element  = queue.front();
            queue.pop_front();
            neib[element]--;

            for(auto i = graph[element].begin(); i!=graph[element].end(); i++){
                neib[*i]--;
            }
        }        
    }
    return sum;
}

int main(){
    int n,m;
    cin >> n >> m;

for(int i = 0; i< m; i++){
    int a,b;
    cin >> a >> b;
    neib[a]++;
    neib[b]++;

    graph[a].push_back(b);
    graph[b].push_back(a);

}

cout << BFS(n);
return 0;
}