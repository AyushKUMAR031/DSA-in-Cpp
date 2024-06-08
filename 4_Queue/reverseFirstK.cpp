//Reverse the first K elements in the Queue.
#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main(){
    queue<int> q;
    stack<int> s;
    int n, k;
    cout<< "Enter the number of elements in the Queue : ";
    cin>> n;
    cout<< "Enter the number of elements to be reversed : ";
    cin>> k;
    cout<< "Enter the elements of the Queue : ";
    for(int i=0; i<n; i++){
        int x;
        cin>> x;
        q.push(x);
    }
    for(int i=0; i<k && !q.empty() ; i++){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    for(int i=0; i<n-k; i++){ //n = q.size()
        q.push(q.front());
        q.pop();
    }
    for(int i=0; i<n; i++){
        cout<< q.front() << " ";
        q.pop();
    }
    return 0;
}
// Time Complexity: O(n)

// input - 10 20 30 40 50 60 70 80 90 100
// k = 5
// stack - 10 20 30 40 50
// Queue - 60 - 100
// Queue - 60 70 80.90.100 50.40 .30.20.10
// output - 50 40 30 20 10 60 70 80 90 100
