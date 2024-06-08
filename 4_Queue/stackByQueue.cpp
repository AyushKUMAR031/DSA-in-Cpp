//Implementing stack by using Queue.
#include<iostream>
#include<queue>
using namespace std;

class Stack{
    queue<int> q;

    public:
        void push(int x){
            //5 7 1 -> 1 7 5
            int s = q.size();
            q.push(x);
            for(int i=0; i<s; i++){
                q.push(q.front());
                q.pop();
            }
        }

        int pop(){
            int n = q.front();
            q.pop();
            return n;
        }

        int top(){
            return q.front();
        }

        int Size(){
            return q.size();
        }
};


int main(){
    Stack s;
    s.push(5);
    s.push(7);
    s.push(1);
    cout<< "Top of the stack : " << s.top() << endl;
    cout<< "Size of the Stack before removing element :" << s.Size() << endl;
    cout<< "The deleted element is :" << s.pop() << endl;
    cout<< "Top of the stack after removing element : " << s.top() << endl;
    cout<< "Size of the Stack after removing element :" << s.Size() << endl;
    return 0;
}