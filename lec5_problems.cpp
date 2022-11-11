#include <iostream>
using namespace std;

class sol1{
    public:
    int ham(int n ){
        int count=0;

        while(n!=0){
            //checking last bit
            if(n&1){
                count++;
            }
        n=n>>1;

        }
    return count;
    }

};

int main()
{
    sol1 n1;
cout<<    n1.ham(9);

    return 0;
}
