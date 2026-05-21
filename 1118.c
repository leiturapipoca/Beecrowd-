#include<bits/stdc++.h>
#include<vector>
#include <list>
#include<stack>
#include<algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <queue>
#include <iomanip>
typedef long long ll;

using namespace std;

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    queue <double> grades;
    while(1){
       
       float x;
       cin>>x;
       if(x>=0 && x<=10){
        grades.push(x);
       } else{
        cout<<"nota invalida\n";
        continue;
       }

       if(grades.size()==2){
        float aux1 = grades.front();
        grades.pop();
        float aux2 = grades.front();
        grades.pop();
        cout << fixed << setprecision(2);
        cout<<"media = "<<(aux1 + aux2)/2.0<<"\n";
        while(1){
            int z;
            cin>>z;
            cout<<"novo calculo (1-sim 2-nao)\n";
            if(z==1){
                break;
            } else if(z==2){
                return 0;
            } else{
                continue;
            }
        }
       }
       
    }
    

    return 0;
}
