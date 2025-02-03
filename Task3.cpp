#include <iostream>
using namespace std;
int main ()
{
    int a=5;
    int *ptr=nullptr;
ptr=&a;
int b=*ptr;
cout<<"value of a is "<<a<<endl;
cout<<"value of b assigned by a pointer is "<<b<<endl;
ptr++;
cout<<a<<endl;
return 0;
}