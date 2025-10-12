#include <iostream>
using namespace std;

int main() {
    
    int a;
    int b;
    
    cout << "Enter num_1= ";
    cin >> a;
    
    cout << "Enter num_2= ";
    cin >> b;
    
    a = a+b;
    
    b = a-b;
    a = a-b;
    cout << "num_1= " << a << endl;
    cout << "num_2= " << b << endl;
    
    
    
    return 0;
}