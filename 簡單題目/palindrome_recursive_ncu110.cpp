#include <iostream> 
using namespace std; 

bool palindrome(string n)
{
    if (n.length() == 0 || n.length() == 1)
        return true;
    else if (n.at(0) != n.at(n.length() - 1))
        return false;
    else
        return palindrome(n.substr(1, n.length() - 2));    
}

int main() 
{ 
    string n = "12345321";
    string m = "12321";
    string p = "12344321";
    cout << palindrome(n) << endl;
    cout << palindrome(m) << endl;
    cout << palindrome(p) << endl;
    return 0; 
}