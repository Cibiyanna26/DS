// Given a binary string with tow queries 1 - count of 1 from 0 to x in the string and 2 - flip all 1 and 0

#include <bits/stdc++.h>
using namespace std;

int countOnes(string& b_string, int x){
    int count = 0;
    for(int i = 0; i <= x; i++){
        if(b_string[i] == '1'){
            count++;
        }
    }
    return count;
}

void flipbs(string& b_string){
    for(int i = 0; i < b_string.size(); i++){
        if(b_string[i] == '1'){
            b_string[i] = '0';
        }else{
            b_string[i] = '1';
        }
    }
    cout << "Flipped binary string: " << b_string << endl;
}

int main(){
    string binary_string = "11000111";
    int x = 5;
    int oneCount = countOnes(binary_string,x);
    cout << "Count of 1's from 0 to " << x << " is: " << oneCount << endl;

    // Flipping all 1's and 0's

    flipbs(binary_string);

    // after flipping

    for(auto x : binary_string){
        cout<<x<<" ";
    }

    return 0;
}