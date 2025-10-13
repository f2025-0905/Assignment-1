#include <iostream>
using namespace std;
#include <iomanip>

int main() {

    cout << "\n";
float firstNum;
cout << "Enter First Number: ";
cin >> firstNum;

float secondNum;
cout << "Enter Second Number: ";
cin >> secondNum;

cout << "\n";

cout << fixed << setprecision(3);
cout << "Sum = " << firstNum+secondNum << endl;
cout << fixed << setprecision(3);
cout << "Difference = " << firstNum-secondNum << endl;
cout << fixed << setprecision(3);
cout << "Product = " << firstNum*secondNum << endl;
cout << fixed << setprecision(3);
cout << "Qoutient = " << firstNum/secondNum << endl;


// Casting numbers into integer
int num_1 = (int)firstNum;
int num_2 = (int)secondNum;

// Printing the casted num in integer
cout << "\n";
cout << "num 1= " << num_1 << endl;
cout << "num 2= " << num_2 << endl;


// Showing same results again in integer
cout << "\n";
cout << "int sum= " << num_1+num_2 << endl;
cout << "int difference= " << num_1-num_2 << endl;
cout << "int product= " << num_1*num_2 << endl;
cout << "int qoutient= " << num_1/num_2 << endl;

// Both results have little difference i.e out put of float variable is in float
// after casting into integer output is also in int variable.
// in float it counts decimal values but in integer it ignores decimal values.


return 0;
}