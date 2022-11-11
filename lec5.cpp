#include <iostream>
using namespace std;

class sol{    
    public:
        int func(int n1)
        {
            int prod = 1, sum = 0;
            while (n1 != 0)
            {
                int digit = n1 % 10;
                prod *= digit;
                sum += digit;
                n1 /= 10;
            }
            int answer = prod - sum;
            return answer;
        }
};

int main()
{   // left and right shift operator.
    // left/right shift of +ve numbers: padding with zero
    // left/right shift of +ve numbers: padding is compiler dependent.

    cout << (3 >> 1) << endl;
    cout << (3 << 9) << endl;
    cout << (3 << 1) << endl;

    cout << "\n\n";

    int a = 5, b = 9;
    cout << (a ^ b) << endl;
    cout << (a & b) << endl;
    cout << (a | b) << endl;

cout<<"from class sol\n ";
       sol n1;
        cout << n1.func(57) << endl; //35-12=23 
        return 0;
    }
    