#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k,val;
    cin>> t;
    while(t--){

        cin >>n>>k;
        int flag=1;
        vector<int> vec;
        for(int i=0;i<n;i++){
            cin>>val;
            vec.push_back(val);
        }
        for(int i=0;i<n;i++){
         
            if(k==vec[i]){
                flag=0;
                break;
            }
        }
        if (flag==1) cout<< "NO"<< endl;
        else  cout<< "YES"<< endl;
        
    }
    return 0;
}