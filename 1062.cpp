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

    while(1){
        int n;
        cin>>n;
        if(n==0){
            break;
        } 
        
        while(1){   
            queue<int> estacao;
            stack<int> s;
            queue<int> v;
            int aux = 0;
            bool flag = false;

            for(int i=0;i<n;i++){
                int x;
                cin>>x;
                if(aux==0 && x==0){
                    flag = true;
                    break;
                }
                estacao.push(x);
                aux++;
            }
           
            if(flag){
                cout<<"\n";
                break;
            } 
             for(int i=0;i<n;i++){
                v.push(i+1);
            }
            int cont=0;
            while(!estacao.empty()){
                if(!v.empty() && v.front()==estacao.front()){ 
                    v.pop();
                    estacao.pop();
                    
                }
                
                else if(!s.empty() && estacao.front()==s.top()){
                    s.pop();
                    estacao.pop();
                }
                else if(!v.empty()){
                    s.push(v.front());
                    v.pop();
                }
                else{
                    break;
                }
            }
            if(s.empty()){
                cout<<"Yes\n";
            } 
            else{
                cout<<"No\n";
            } 
        }
    }
}
