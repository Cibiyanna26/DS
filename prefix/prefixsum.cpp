// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void prefixcreation(int arr[],int n, int prefix[]){
    prefix[0] = arr[0];
    
    for(int i =1;i<n;i++){
        prefix[i] = prefix[i-1]+arr[i];
    }
}

int main() {
   
   int arr[] ={1,2,3,4,4,5,5,5};
   
   int n = 8;
   
   int prefix[n];
   
   prefixcreation(arr,n,prefix);
   
   for(int i = 0;i<n;i++){
       cout<<arr[i]<<" "<<prefix[i]<<endl;
   }
    
    return 0;
}