#include <iostream>
using namespace std;

#define MAX 1000

class Stack {
    int top;

public:
    int a[MAX]; // Maximum size of Stack

    Stack() { 
        top = -1; 
    }

    bool push(int x){
        if(top >= (MAX - 1 )){
            cout << "Stack Overflow"<<endl;
            return false;
        }
        else{
            a[++top] = x;
            cout << x<< "pushed into stack \n";
            return true;
        }
    }

    int pop(){
        if(top<0){
            cout << "Stack Underflow"<<endl;
            return 0;
        }
        else{
            int x = a[top--]; //top = top - 1 
            return x;
        }
    }

    int peek(){
        if (top < 0){
            cout << "Stack is Empty";
            return 0;
        }
        else{
            int x = a[top];
            return x;
        }
    }
    bool isEmpty();
};

bool Stack::isEmpty(){
    return (top < 0);
}

int main(){
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.pop() << " Popped from stack\n";

    //print top element of stack after popping
    cout << "Top element is : " << s.peek() <<endl;

    //print all elements in stack
    cout << "Elements present in stack : ";
    while(!s.isEmpty()){

        cout << s.peek() << " "; //printing top element in stack
        s.pop(); // removing top element in stack
    }
    return 0;
}


