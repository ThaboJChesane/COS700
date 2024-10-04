#include <iostream>
using namespace std;


bool isPalindrome(string s, int start, int end) {
    if (start >= end)
        return true;  
    if (s[start] != s[end])
        return false; 
    return isPalindrome(s, start + 1, end - 1); 
}

int main() {
    string input = "deed";  
    bool result = isPalindrome(input, 0, input.length() - 1);
    if (result) {
        cout << input << " is a palindrome" << endl;
    } else {
        cout << input << " is not a palindrome" << endl;
    }
    return 0;
}
