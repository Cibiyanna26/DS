#include <bits/stdc++.h>

using namespace std;

// Function to count the number of vowels in a word
int vowelCount(string& word){
    int count = 0;
    for(char c : word){
        if(tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u'){
            count++;
        }
    }
    return count;

}

// Function to compare two words based on vowel-consonant difference and alphabetical order
bool compareWords(string& word1 ,string& word2){{
    int vowelCount1 = vowelCount(word1);
    int consonantCount1 = word1.size() - vowelCount1;
    int vowelCount2 = vowelCount(word2);
    int consonantCount2 = word2.size() - vowelCount2;

    // Sort based on absolute difference in vowel-consonant count
    int diff1 = abs(vowelCount1 - consonantCount1);
    int diff2 = abs(vowelCount2 - consonantCount2);
    if(diff1 != diff2){
        return diff1 > diff2; // Words with higher difference come first
    }
    // If difference is same, sort alphabetically
    return word1 < word2;

}}


int main() {

    string str = "This is a code string";
    vector<string> words;
    string word;
    istringstream iss(str);

    // Split the string into separate words
    while(getline(iss,word,' ')){
        words.push_back(word);
    }

    sort(words.begin(),words.end(),compareWords);
    // the sorted string which is sorted based on compareWords
    cout << "Sorted string: ";
    for (string &word : words)
    {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}