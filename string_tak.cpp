#include <bits/stdc++.h>
using namespace std;

int main(){
    string str,ans="";
    cin>> str;
    vector<char> vowels={'a','e','u','i','o','y'};
    for(auto it: str){
        auto itr=count(vowels.begin(),vowels.end(),tolower(it));
        if(itr==0){      
            ans=ans+".";
            ans+=tolower(it);
        }
    }
    cout<< ans;
    return 0;
}