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
    int arr[]{1,3,4,5,6,7,10,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);
    for(int i:arr){
        st.push(i);
    }
    for(int i=0;i<n;i++){
        arr[i]=st.top();
        st.pop();
    }
    printArray(arr,n);
    return 0;
}