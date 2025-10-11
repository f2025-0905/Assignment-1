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
    int largest_1;
    if (num_1 > num_2) {
        largest_1 = num_1;
    } else {
        largest_1 = num_2;
    }
    
    cout << "\n";
    
    if (largest_1 > num_3) {
        cout << "largest number= " << largest_1 << endl;
    } else {
        cout << "largest number= " << num_3 << endl;
    }
    
    
    // Finding Smallest number
    
    int smallest_1;
    if (num_1 < num_2) {
        smallest_1 = num_1;
    } else {
        smallest_1 = num_2;
    };
    
    cout << "\n";
    
    if (smallest_1 < num_3) {
        cout << "smallest number= " << smallest_1 << endl;
    } else {
        cout << "smallest number= " << num_3 << endl;
    };
    
    cout << "\n";
    
    bool iEqual;
    
   if (num_1 == num_2) {
      iEqual = true;
   } else {
       iEqual = false;
   };


   
   if (iEqual == true) {
       string equality = (num_1 == num_3)? "All numbers are equal" : "All numbers are not equal";
       cout << equality;
   } else {
       cout << "All numbers are not equal";
   }
    

    
    return 0;
}