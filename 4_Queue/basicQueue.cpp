//Queue - First In First Out - FIFO

#include <iostream>
#include <queue>
using namespace std;

int main(){
    //Creating a queue of integers
    queue<int> q;

    //Pushing elements into the queue
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    //Checking if the queue is empty
    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }else{
        cout<<"Queue is not empty"<<endl;
    }

    //Accessing the front element of the queue
    cout<<"Front element of the queue is: "<<q.front()<<endl;

    //Accessing the back element of the queue
    cout<<"Back element of the queue is: "<<q.back()<<endl;

    //Poping elements from the queue
    q.pop();

    //Accessing the front element again 
    cout<<"Front element of the queue is: "<<q.front()<<endl;

    //Getting the size of the queue
    cout<<"Size of the queue is: "<<q.size()<<endl;

    return 0;
}