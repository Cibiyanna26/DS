#include <bits/stdc++.h>
using namespace std;

void selection_sort(vector<int>& v,int n){
    int i , j, minIndex;
    for(int i = 0;i<n-1;i++){
        minIndex = i;
        for(int j = i+1;j<n;j++){
            if(v[j]<v[minIndex]){
                minIndex = j;
            }
        }
        int temp = v[minIndex];
        v[minIndex] = v[i];
        v[i] = temp;
    }
    cout<<v.size()<<endl;
}


int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    cout<<n<<endl;
    for(int i = 0;i<n;i++){
        int a;
        cin>>a;
        v[i] = a;
    }
    selection_sort(v,n);

    for(auto x: v){
        cout<<x<<" ";
    }
}


// By Mikey 🐿️