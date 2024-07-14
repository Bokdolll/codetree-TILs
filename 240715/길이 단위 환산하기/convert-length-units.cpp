#include <iostream>
using namespace std;

int main() {
    double n;
    cin>>n;
    double d=30.48;

    cout<<fixed;
    cout.precision(1);

    cout<<n*d;
    return 0;
}