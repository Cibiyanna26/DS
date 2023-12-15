#include <bits/stdc++.h>
using namespace std;

void leftshift(vector<vector<int>>& v , int n){
    
    for(int i= 0;i<n;i++){
        int t = v[i][0];
        for(int j = 1;j<n;j++){
            v[i][j-1]=v[i][j];
        }
        v[i][n-1]=t;
    }
}

int main(){
    vector<vector<int>> v;
    int n ;
    cout<<"Enter the number of n  matrix"<<endl;
    cin>>n;
    for(int i = 0 ;i<n;i++){
        vector<int> temp;
        for(int j = 0;j<n;j++){
            cout<<"Enter the element for row"<<i<<" column "<<j<<endl;
            int a;
            cin>>a;
            temp.push_back(a);
        }
        v.push_back(temp);
    }

    int k;
    cout<<"Enter the number of k shift"<<endl;
    cin>>k;
    for(int i =0;i<k;i++){
        leftshift(v,n);
    }
    for(auto x : v){
        for(auto y : x){
            cout<<y<<" ";
        }
        cout<<endl;
    }

}
