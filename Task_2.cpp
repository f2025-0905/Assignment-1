#include <iostream>
using namespace std;
#include <iomanip>

main() {
    float english;
    float maths;
    float physics;
    float ICT;
    float PF;

    cout << "Enter your English Marks: " << endl;
    cin >> english;

    cout << "Enter Your Physics marks: " << endl;
    cin >> physics;

     cout << "Enter Your maths marks: " << endl;
    cin >> maths;

    cout << "Enter Your ICT marks: " << endl;
    cin >> ICT;

    cout << "Enter Your PF marks: " << endl;
    cin >> PF;

    float percentage = ((english+maths+physics+ICT+PF)/500)*100;

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
   

   cout << "_______________________" << endl;
   cout << setw(15) << left << "Subject" << setw(15) << left << "Marks" << endl;
   cout << "_______________________" << endl;
   
   cout << setw(15) << left << "English" << setw(15) << left << english << endl;
   cout << setw(15) << left << "Physics" << setw(15) << left << physics << endl;
   cout << setw(15) << left << "Maths" << setw(15) << left << maths << endl;
   cout << setw(15) << left << "ICT" << setw(15) << left << ICT << endl;
   cout << setw(15) << left << "PF" << setw(15) << left << PF << endl;
   
   cout << "_______________________" << endl;

   cout << setw(15) << left << "Total" << setw(15) << left << english+maths+physics+ICT+PF << endl;
   cout << setw(15) << left << "Percentage" << percentage << "%"<< endl;
   cout << setw(15) << left << "Grade" << setw(15) << left << grade << endl;
   cout << setw(15) << left << "Remarks" << setw(15) << left << result << endl;

   cout << "_______________________" << endl;




    return 0;
}