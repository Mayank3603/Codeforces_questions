#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,t;
    cin>> n;
    for(int i=0;i<n;i++){
        cin>> m;
        int val=1;
        while(m--){
            cin>>t;
            if(t==val) val++;
            val++;
        }
        cout<< val-1<< endl;
    }
    return 0;
}