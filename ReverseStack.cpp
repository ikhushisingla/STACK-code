#include <iostream>
#include<stack>
using namespace std;

int main() {
    stack<int> st;
    int n;
    cin>>n;
    int arr[n];
    //Taking/pushing element into stack
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        st.push(temp);
    }
    //pop element from stack and push into array 
    for(int i=0;i<n;i++){
        arr[i]=st.top();
        st.pop();
    }
    //push element from array to stack to reverse
    for(int i=0;i<n;i++){
        st.push(arr[i]);
    }
    
    return 0;
}