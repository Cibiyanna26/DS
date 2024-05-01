#include <bits/stdc++.h>

using namespace std;

bool sortGrade(const string &a, const string &b) {
    return stoi(a.substr(a.find(" ") + 1)) > stoi(b.substr(b.find(" ") + 1));
}

int main() {
    // Your code here
    vector<string> students = {"Alice 95", "Bob 88", "Charlie 100", "David 77"};
    sort(students.begin(), students.end(), sortGrade);
    stringstream ss(students[0]);
    string first_mark_student ;
    string n;
    ss >> first_mark_student;
    cout<<first_mark_student<<" "<<n<<endl;


    return 0;
}