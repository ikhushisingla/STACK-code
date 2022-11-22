
#include <iostream>
using namespace std;

struct myStack{
    int *arr;
    int capacity;
    int top;
    myStack(int capacity){
        arr=new int[capacity];
        top=-1;
    }
    void push(int x){
        top++;
        arr[top]=x;
    }
    int pop(){
        int res=arr[top];
        top--;
        return res;
    }
    int peak(){
        return arr[top];
    }
    int size(){
        return (top+1);
    }
    bool isEmpty(){
        return (top==-1);
    }
};

int main() {
    myStack s(5);
    s.push(8);
    s.push(12);
    s.push(21);
    cout<<s.peak()<<endl;
    s.pop();
    cout<<s.pop()<<endl;
    cout<<s.peak()<<endl;
    cout<<s.size()<<endl;
    s.push(21);
    cout<<s.peak()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;
    
    return 0;
}