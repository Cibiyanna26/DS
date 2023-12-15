#include <bits/stdc++.h>
using namespace std;



int main(){
    int arr[] = {1,10,15,17,19,20,25};
    int size = sizeof(arr)/sizeof(arr[0]);
    int low = 0;
    int high = size-1;
    int target = 20;
    int fl = 0;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == target){
            cout<<"position"<<mid<<endl;
            fl = 1;
            break;
        }
        else if(arr[mid]>target){
            high = mid -1;
        }
        else {
            low = mid +1;
        }
    }
    if(fl==0){
        cout<<"not found"<<endl;
    }
    
}