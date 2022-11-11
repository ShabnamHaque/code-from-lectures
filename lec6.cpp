#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter decimal number to be converted to binary :\t";
    cin>>n;

    int ans=0;
    int i=0;
    while(n!=0){
        
        int  bit=n&1;
         
        ans=(bit*pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    cout<<"answer in binary: "<< ans<<endl;

    int n2;
    cout<<"enter binary to be converted to decimal:\n";
    cin>>n2;

    int ans2=0;
   int i2=0;
    while(n2!=0){
        
        int digit=n2%10;
        ans2=digit*pow(2,i2)+ans2;
        n2=n2/10;
        i2++;
    }
    cout<<"answer in decimal: "<<ans2<<endl;
        return 0;
    }
