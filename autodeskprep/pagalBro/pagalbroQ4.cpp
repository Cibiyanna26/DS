// given 2 arrays a & B, there are 'q' queries of two types, 
//1- update the value of B array & 2-find the number of pairs of elements between a & b that can sum up to target.

#include <bits/stdc++.h>
using namespace std;

void updateB(vector<int> &B,unordered_map<int,int> freq , int idx , int newVal ){
    if(freq.count(B[idx])){  // decrement count of old value (if exists)
        freq[B[idx]]--;
    
    }
    B[idx] = newVal;
    freq[newVal]++;  // increment count of new value
}

int query(vector<int>& A , unordered_map<int,int>& freq,int target){
    int pairCount = 0;
    for(int i=0;i<A.size();i++){
        if(freq.count(target-A[i])){
            pairCount += freq[target-A[i]];
        }
    }
}

int main()
{
    vector<int> A = {1,1,2};
    vector<int> B = {2,1,3};
    unordered_map<int,int> freq;
    for(int i=0;i<A.size();i++){
        freq[B[i]]++;
    }
    // first query is to update B 
    updateB(B,freq,1,4);

    int target = 10;
    int pairCount = query(A,freq,target);
    cout << "Number of pairs that sum to " << target << ": " << pairCount << endl;
}
