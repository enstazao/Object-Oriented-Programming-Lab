#include <iostream>
using namespace std;

int main(){
    int Arr2[] = {2, 4};
    int *p = Arr2;
    int q = *p++;
    cout << q << endl;
    cout << *p << endl;
}