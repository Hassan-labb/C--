#include <iostream>
#include <bits/stdc++.h> // library used for math to find maximam number
using namespace std;
int main() {
    int a;
    int b;
    int c;
    cout<<"enter first number: ";
    cin>>a;
    cout<<"enter second number: ";
    cin>>b;
    cout<<"enter third number: ";
    cin>>c;
    cout<<max({a,b,c});
    return 0;
}