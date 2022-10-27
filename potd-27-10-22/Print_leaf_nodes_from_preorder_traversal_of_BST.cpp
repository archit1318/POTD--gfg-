#include<bits/stdc++.h>
using namespace std;
vector<int> leafNodes(int a[],int n) {
    stack<int>st;
    vector<int>v;
    st.push(a[0]);
    for(int i=1;i<n;i++){
        if(st.top()<a[i]){
            int temp=0;
            int flag=st.top();
            while(!st.empty() and st.top()<a[i]){
                st.pop();
                temp++;
            }
            if(temp>1){
                v.push_back(flag);
            }
        }
        st.push(a[i]);
    }
    if(!st.empty())v.push_back(st.top());
    return v;     
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        vector<int>ans=leafNodes(arr,n);
        for(auto x:ans)cout<<x<<"  "<<endl;
    }
    return 0;
}