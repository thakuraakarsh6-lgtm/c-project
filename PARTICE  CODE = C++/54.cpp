// wap to program constructor a use palindrome number
#include <iostream>
using namespace std;

class Palindrome
{
    int num, original, reverse;

public:
    
    Palindrome(int n)
    {
        num = n;
        original = n;
        reverse = 0;

        while(num != 0)
        {
            int rem = num % 10;
            reverse = reverse * 10 + rem;
            num = num / 10;
        }

        if(original == reverse)
            cout << original << " is a Palindrome number" << endl;
        else
            cout << original << " is Not a Palindrome number" << endl;
    }
};

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    Palindrome p(number); 

    return 0;
}