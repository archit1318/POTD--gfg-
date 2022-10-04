#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> prefixCount(int N, int Q, string li[], string query[])
       {

        //make map and stores all the prefix of li strings with their frequency
        map<string,int>m;
        for(int i=0;i<N;i++){
            string s="";
            for(int j=0;j<li[i].size();j++){
                s+=li[i][j];
                m[s]++;
            }
        }
        vector<int>v;   
        //now check if query if present than push frequnecy of that element in v vector 
        for(int i=0;i<Q;i++){
            v.push_back(m[query[i]]);
        }
        //return vector 
        return v;
    }
};
int main(){
    int t;
    while(t--){
        int q,n,i=0,x;
        cin>>n;
        string s;
        string li[n];
        for(int i=0;i<n;i++){
            cin>>li[i];
        }
        cin>>q;
        x=q;
        string query[q];
        while(q--){
            cin>>s;
            query[i++]=s;
        }
        Solution obj;
        vector<int>ans=obj.prefixCount(n,x,li,query);
        for(auto x:ans)cout<<x<<"\n";
    }
    return 0;
}