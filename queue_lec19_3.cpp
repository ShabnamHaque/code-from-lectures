#include <bits/stdc++.h> 
using namespace std;

int main(){

stack<string> s;
s.push("Miss");
s.push("Shabnam");
s.push("Haque");

cout<<"Top element: "<<s.top();
//s.pop() pops the top element.

queue<string>q;
q.push("Miss");
q.push("Shabnam");
q.push("Haque");
cout<<"\nFirst element: "<<q.front();

q.pop(); //pops Miss
cout<<"\nFirst element: "<<q.front();
    return 0;
}