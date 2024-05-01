// Find the number of integers that contains even number of digits 
//in the given array.

#include <bits/stdc++.h>
using namespace std;


int main() {
    vector<int> v = { 1 , 20 , 1023 , 12345 };
    int even_digit_res = 0;
    for (int num : v) {
        int digits = floor(log10(num)) + 1; // formula to find number of digits in a number
        if(digits % 2 == 0){
            even_digit_res++;
        }
    }
    cout<<"Number of elements with even number of digits: "<<even_digit_res<<endl;
    
    return 0;
}


