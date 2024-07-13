#include <iostream>
using namespace std;

int main() {
    int weight=13;
    float rate=0.165;
    cout<<fixed;
    cout.precision(6);
    cout<<weight<<" * "<<rate<<" = "<<weight*rate;

    return 0;
}