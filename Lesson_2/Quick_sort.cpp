#include <bits/stdc++.h>
using namespace std;

int partitions(vector<int>& v, int low, int high){
    int pivot = v[low];
    int i = low, j = high;
    while(i<j){
        while(v[i]<=pivot && i<=high-1){
            i++;
        }
        while(v[j]>=pivot && j>=low+1 ){
            j--;
        }
        if(i<j)swap(v[i],v[j]);
    }
    swap(v[low],v[j]);
    return j;
}


void QuickSort(vector<int>& v,int low,int high){
    if(low<high){
        int pivot = partitions(v,low,high);
        QuickSort(v,low,pivot-1);
        QuickSort(v,pivot+1,high);
    }

}


void quick_sort(vector<int>& v,int n){
 
    QuickSort(v,0,n-1);
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0;i<n;i++){
        int a;
        cin>>a;
        v[i] = a;
    }
    quick_sort(v,n);
    for(auto x: v){
        cout<<x<<" ";
    }
}
