#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1;
    string s2 = "Hello";
    string s3("World");
    string s4(s2);
    string s5 = s3 + "!!!";
    string s6(5, '*');

    cout << s2 << " " << s3 << endl;

    return 0;
}
