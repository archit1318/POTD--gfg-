#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    string lexicographicallySmallest(string s, int k) {
        int n=s.size(); //size of string
        if(n&(n-1))k=k*2; //if string is pow of2's do k*k=2
        else k/=2;  //else k/2

        if(k>=n)return "-1"; //if k is greater than eqauls to n return "-1"
                           

        stack<char>st;   //stack
    
        for(int i=0;i<n;i++){
            while(!st.empty() and k>0 and st.top()>s[i]){  //if stack top has largest value than string of i index
                st.pop();   k--;
            }
            st.push(s[i]);
        }
    
        string stt="";
        while(k>0 and !st.empty()){
            st.pop();
            k--;
        }
        while(!st.empty()){
            stt+=st.top(); st.pop();
        }


        reverse(stt.begin(),stt.end());
        return stt;
    }
};
int main(){
    string s; cin>>s;
    int k;
    solution obj;
    cin>>k;
    cout<<obj.lexicographicallySmallest(s,k);
    return 0;
}