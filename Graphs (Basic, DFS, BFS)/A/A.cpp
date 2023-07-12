#include<bits/stdc++.h>


using namespace std;

const int max_n = (int)2e5+5; // n (2≤n≤200000) 

//int n;
bool vet_visited[max_n];

vector < int > vet_save;
vector < int > vet_graph[max_n];


void dfs(int v)
{
    vet_visited[v]=1;
    vet_save.push_back(v);
    for(int i=0 ; i<vet_graph[v].size() ; i++){
        if(!vet_visited[i]){
            dfs(vet_graph[v][i]);
        }
    }
}

int main(){
    int n,p;
    cin>>n;

    for(int i=2 ; i<=n ; i++) {
        cin>>p;
        vet_graph[i].push_back(p);
    }
    dfs(n);

    for(int i=vet_save.size()-1 ; i>=0 ; i--) {
        cout<<vet_save[i]<<" ";
    }
    return 0;
}
