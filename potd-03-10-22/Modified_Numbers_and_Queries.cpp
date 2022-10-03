#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int sumOfAll(int l, int r){
        int ans=0;

         // make the sieve or eratosthenes
        vector<bool>prim(r+1,true);
        for(int i=2;i<=r;i++){
            if(prim[i]){
                for(int j=i*i;j<=r;j+=i){
                    prim[j]=false;
                }
            }
        }
        
        while(l<=r){
            if(l==1){
               l++;
               ans++;
               continue;
            }
            int curr=0;
            for(int i=2;i<=l;i++){
                if(prim[i] && l%i==0){
                   curr+=i;
                }
            }
            ans+=curr;
            l++;
        }
       return ans;   
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        Solution s;
        cout<<s.sumOfAll(l,r)<<endl; 
    }
    return 0;
}