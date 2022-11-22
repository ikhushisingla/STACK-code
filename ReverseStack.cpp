#include <iostream>
#include<stack>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main() {
    stack<int> st;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        arr[i]=st.top();
        st.pop();
    }
    printArray(arr,n);
    return 0;
}