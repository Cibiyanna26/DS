// swap pairs of numbers  (adjacent) if the element present in left is greater than right

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code goes here
    vector<int> v ={1 , 5 , 4 , 9, 10 , 7};    

    for(int i = 0;i<v.size()-1;i++){
        if(v[i]>v[i+1]){
            swap(v[i],v[i+1]);
        }
    }

    for(auto x : v){
        cout<<x<<" ";
    }
    return 0;
}