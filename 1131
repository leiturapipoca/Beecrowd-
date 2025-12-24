#include<bits/stdc++.h>
#include<vector>
#include <list>
#include<stack>
#include<algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <queue>
typedef long long ll;

using namespace std;

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    int gr = 0,it = 0,emp= 0, grenais = 1;
    while(1){
        int inter,gremio;
        cin>>inter>>gremio;

        

        if(gremio==inter){
            emp++;
        }
        else if(gremio>inter){
            gr++;
        } else{
            it++;
        }

        cout<<"Novo grenal (1-sim 2-nao)\n";
        int z;
        cin>>z;
        if(z==2){
            break;
        }         
        grenais++;
    }

    string aux;
    if(it==gr){
        aux = "Nao houve vencedor";
    } else if(it>gr){
        aux = "Inter venceu mais";
    }else{
        aux = "Gremio venceu mais";
    }
    cout<<grenais<<" grenais\n"<<"Inter:"<<it<<"\n"<<"Gremio:"<<gr<<"\n"<<"Empates:"<<emp<<"\n"<<aux<<"\n";
    return 0;
}
