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

    int x,y;
    while(1){
        cin>>x>>y;
        if(x==0 || y==0){
            return 0;
        }

        bool xpos=false,ypos=false;
        if(x>0){
            xpos = true;
        }
        if(y>0){
            ypos = true;
        }

        if(xpos && ypos){
            cout<<"primeiro\n";
        } else if(xpos && !ypos){
            cout<<"quarto\n";
        } else if(!xpos && ypos){
            cout<<"segundo\n";
        } else{
            cout<<"terceiro\n";
        }
    }
    

    return 0;
}
