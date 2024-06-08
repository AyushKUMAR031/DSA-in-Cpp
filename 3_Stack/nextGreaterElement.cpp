//Finding the next Greater Element for each element present in the array.

#include<iostream>
#include<stack> //adding stack in here //FILO
using namespace std;

void nextGreaterElement(int nums[],int n, int nge[]){
    stack <int> st;
    for( int i=2*n-1;i>=0;i--){

        while(!st.empty() && st.top()<=nums[i%n])
            st.pop();

        if(i<n){
            if(!st.empty())
                nge[i] = st.top();
            else
                nge[i] = -1;
        }
        st.push(nums[i%n]);
    }
}

int main(){
    int arr[] = {5,7,1,2,6,0};
    int n = sizeof(arr)/sizeof(arr[0]); //for getting the length of the array.
    int nge[n]; //created an array for nextGreaterElement of size n;

    nextGreaterElement(arr,n,nge); //passing paramenters

    cout<<"The next greater Elements are"<<endl;

    for (int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }

    return 0;
}
