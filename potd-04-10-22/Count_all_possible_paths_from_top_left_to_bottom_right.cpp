#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
class Solution {
  public:
    long long int numberOfPaths(int m, int n){
        // code here
        long long int dp[m][n];
        for(int i = 0;i<m;i++)
        {
            for(int j= 0;j<n;j++)
            {
                if(i==0||j==0)
                dp[i][j]=1;
            }
        }
        for(int i =1;i<m;i++)
        {
            for(int j =1;j<n;j++)
            {
                dp[i][j] = (dp[i-1][j]+dp[i][j-1])%M;
            }
        }
        return dp[m-1][n-1];
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>m>>n;
        Solution s;
        cout<<s.numberOfPaths(m,n)<<endl;
    }
    return 0;
}