//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

#define fi first
#define se second



 // } Driver Code Ends
//User function Template for C++

int getClosing(int i, string &s){
    while( i < s.length()){
        if(s[i] == ')'){
            s[i] = '#';
            return i;
        }   
        i += 1;
    }
    
    return 0;
}

vector<pair<int, int>> pairingBrackets(string s){
    vector<pair<int, int>> result;
    
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '('){
            if(int j = getClosing(i+1, s)){
                pair<int, int> pairs;
                pairs.first = i;
                pairs.second = j;
                result.push_back(pairs);
            }
        }
    }
    
    return result;
}

// { Driver Code Starts.


int main(){
    
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<pair<int,int> > ans=pairingBrackets(s);
        cout<<ans.size()<<endl;
        for(auto it:ans){
            cout<<it.fi<<" "<<it.se<<endl; 
        }
    }
    return 0;
}  // } Driver Code Ends