#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
   int minChar(string str){
    //using two pointres approach 
        int l=0,r=str.size()-1;
        int temp=r;
        int count=0;
        while(l<r){
            if(str[l]==str[r]){
                l++;
                r--;
            }
            else{
                count++;
                l=0;
                r=--temp;
            }
        }
        return count;
    }
};
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        Solution sol;
        int ans=sol.minChar(s);
        cout<<ans<<endl;
    }
    return 0;
}