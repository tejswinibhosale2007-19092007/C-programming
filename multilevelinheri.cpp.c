#include <iostream> 
using namespace std;  

class StudentInfo { 
protected:     
    char name[100];      
    int rollNo;  
public:     
    void getStudentInfo() {         
        cout << "Enter Student Name: ";         
        cin.get();          
        cin.getline(name, 100);         
        cout << "Enter Roll Number: ";         
        cin >> rollNo;     
    }      
    void displayStudentInfo() {         
        cout << "Name: " << name << "\n";         
        cout << "Roll Number: " << rollNo << "\n";     
    }; 
};  

class StudentMarks { 
protected:     
    float marks[5];  
public:     
    void getMarks() {         
        for (int i = 0; i < 5; i++) {
            cout << "Enter marks for Subject " << (i + 1) << ": ";         
            cin >> marks[i];         
        }
    }      
    void displayMarks() {         
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << (i + 1) << " Marks: " << marks[i] << "\n";         
        }
    }; 
};  

class StudentResult : public StudentInfo, public StudentMarks { 
private:     
    float totalMarks;     
    float percentage;  
public:     
    void calculateResult() {         
        totalMarks = 0;
        for (int i = 0; i < 5; i++) {
            totalMarks += marks[i];
      }
        percentage = (totalMarks / 500.0) * 100.0;     
    }         
    
    void ReportCard() {
        cout << "\nReportcard: \n"; 
        displayStudentInfo();         
        displayMarks();                  
        
        cout << "Total Marks: " << totalMarks << " / 500\n";        
        cout << "Percentage: " << percentage << "%\n";         
    } 
};  

int main() {     
    StudentResult student;      
    student.getStudentInfo();     
    student.getMarks();     
    student.calculateResult();     
    student.ReportCard();      
    return 0; 
}

