#include <iostream>
using namespace std;
#include <iomanip>

int main() {
    int num_1;
    int num_2;
    int num_3;
    
    cout << "Enter First Number" << endl;
    cin >> num_1;
    
    cout << "Enter Second Number" << endl;
    cin >> num_2;
    
    cout << "Enter Third Number" << endl;
    cin >> num_3;
    
    // Finding the largest number
    
    cout << "\n";
    if (num_1 == num_2 && num_1 == num_3) {
        cout << "No maximum, all are equal" << endl;
    } else {
     if (num_1 > num_2) {
        if (num_1 > num_3) {
            cout << "Number 1 is greatest which is " << num_1 << endl;
        } else {
            cout << "Number 3 is greatest which is " << num_3 << endl;
        }
    } else {
        if (num_2 > num_3) {
            cout << "Number 2 is greatest which is " << num_2 << endl;
        } else {
            cout << "Number 3 is greatest which is " << num_3 << endl;
        }
    }
    }
    
    
    // Finding Smallest number
    
    if (num_1 == num_2 && num_1 == num_3) {
        cout << "No minimum, all are equal" << endl;
    } else {
    if (num_1 < num_2) {
        if (num_1 < num_3) {
            cout << "Number 1 is smallest which is " << num_1 << endl;
        } else {
            cout << "Number 3 is smallest which is " << num_3 << endl;
        }
    } else {
        if (num_2 < num_3) {
            cout << "Number 2 is smallest which is " << num_2 << endl;
        } else {
            cout << "Number 3 is smallest which is " << num_3 << endl;
        }
    }
    }
    

    // Finding Equality among three numbers 
    
 
   
   if (num_1 == num_2 && num_1 == num_3) {
       cout << "All numbers are equal";
   } else {
       cout << "All numbers are not equal";
   }
    

    
    return 0;
}