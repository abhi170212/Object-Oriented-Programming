#include<bits/stdc++.h>
using namespace std;

class Subject{
     public:
     int code;
     string name;
     string teacherName;

     void subjectDetails(){
          cout << "subject is " << this->name << endl;
          cout << "subject code is  " << (*this).code << endl;
          cout << "subject teacher  is " << this->teacherName << endl;
     }
};

int main(void){
     Subject mathematics;
     mathematics.code = 424;
     mathematics.name="mathematics";
     mathematics.teacherName="Anand Tripathi";

     mathematics.subjectDetails();

     return 0;
}