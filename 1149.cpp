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

    int a,n=0;
    cin>>a;
    int sum = 0;
    while(n<=0){
        cin>>n;
        
        for(int i = 0;i<=n - 1;i++){
            sum += a + i;
        }
    }
    cout<<sum;
}
