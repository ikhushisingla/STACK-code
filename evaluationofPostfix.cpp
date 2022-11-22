#include <bits/stdc++.h>
using namespace std;

int main() {
stack<int> st;
string s="2356+**5/2-";

for(int i=0;i<s.length();i++){
    char c=s[i];
    if(c>=48 && c<=57){
             int num=c-'0';
             st.push(num);
         }
        else{
            int a=st.top();
            st.pop();
            int b=st.top();
            st.pop();
            int ans;
            if(c=='*'){
                ans=b*a;
            }
            else if(c=='/'){
                ans=b/a;
            }
            else if(c=='+'){
                ans=b+a;
            }
            else if(c=='-'){
                ans=b-a;
            }
            st.push(ans);
        }
    }
    cout<<st.top()<<endl;
    return 0;
}