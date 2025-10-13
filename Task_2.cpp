#include <iostream>
using namespace std;
#include <iomanip>

int main() {
    float english, physics, maths, ICT, PF;
    float engMax, phyMax, matMax, ICTMax, PFMax;
    

    cout << "Enter your English Marks: " << endl;
    cin >> english;
    cout << "Enter Maximum English Marks: " << endl;
    cin >> engMax;

    cout << "Enter Your Physics marks: " << endl;
    cin >> physics;
    cout << "Enter Maximum Physics Marks: " << endl;
    cin >> phyMax;

     cout << "Enter Your maths marks: " << endl;
    cin >> maths;
    cout << "Enter Maximum Maths Marks: " << endl;
    cin >> matMax;

    cout << "Enter Your ICT marks: " << endl;
    cin >> ICT;
    cout << "Enter Maximum ICT Marks: " << endl;
    cin >> ICTMax;

    cout << "Enter Your PF marks: " << endl;
    cin >> PF;
    cout << "Enter Maximum English Marks: " << endl;
    cin >> PFMax;

    float percentage = ((english+maths+physics+ICT+PF)/(engMax+phyMax+matMax+ICTMax+PFMax))*100;

    cout << "\n";

    

    string grade;
    
    if (percentage >= 90){
        grade = "A+";
    } else if (percentage >= 80){
        grade = "A";
    } else if (percentage >= 70){
        grade = "B";
    } else if (percentage >= 60){
        grade = "C";
    } else if (percentage >= 50){
        grade = "D";
    } else {
        grade = "F";
    }


   string result = (percentage >= 50) ? "Pass" : "Fail";
   
   
   

   cout << "______________________________________________" << endl;
   cout << setw(20) << left << "Subject" << setw(15) << left << "Marks" << setw(15) << left << "Max Marks" << endl;
   cout << "______________________________________________" << endl;
   
   cout << setw(20) << left << "English" << setw(15) << left << english << setw(15) << left <<engMax << endl;
   cout << setw(20) << left << "Physics" << setw(15) << left << physics << setw(15) << left << phyMax<< endl;
   cout << setw(20) << left << "Maths" << setw(15) << left << maths << setw(15) << left << matMax<< endl;
   cout << setw(20) << left << "ICT" << setw(15) << left << ICT << setw(15) << left << ICTMax << endl;
   cout << setw(20) << left << "PF" << setw(15) << left << PF << setw(15) << left << PFMax << endl;
   
   cout << "______________________________________________" << endl;

   cout << setw(20) << left << "Total" << setw(15) << left << english+maths+physics+ICT+PF << setw(15) << left << engMax+phyMax+matMax+ICTMax+PFMax << endl;
   cout << setw(20) << left << "Percentage" << percentage << "%"<< endl;
   cout << setw(20) << left << "Grade" << setw(15) << left << grade << endl;
   cout << setw(20) << left << "Remarks" << setw(15) << left << result << endl;

   cout << "______________________________________________" << endl;




    return 0;
}