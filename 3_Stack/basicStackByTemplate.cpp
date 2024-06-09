//Stack -Last In First Out - LIFO
#include <iostream>
#include <stack>
using namespace std;

int main(){
    //Creating a stack of integers
    stack<int> s;

    //Pushing elements into the stack
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    //Checking if the stack is empty
    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }else{
        cout<<"Stack is not empty"<<endl;
    }

    //Accessing the top element of the stack
    cout<<"Top element of the stack is: "<<s.top()<<endl;

    //Poping elements from the stack
    s.pop();

    //Accessing the top element again 
    cout<<"Top element of the stack is: "<<s.top()<<endl;

    //Getting the size of the stack
    cout<<"Size of the stack is: "<<s.size()<<endl;

    return 0;
}