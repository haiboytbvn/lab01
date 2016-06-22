#include <iostream>
#include <conio.h>    
#include <iomanip>  
#include <stdio.h>
#include <String.h>
using namespace std; 


class subject{
	public: 
		float testMark1;
		float testMark2;
		float examMark1;
		float examMark2;
		float sumMark;	
	public:
		void setMark(){
			cout << "Input Mark:" << endl;
			cout << "test Mark 1: "; cin >> testMark1; 
			cout << "test Mark 2: "; cin >> testMark2; 
			cout << "exam Mark 1: "; cin >> examMark1;
			cout << "exam Mark 1: "; cin >> examMark1; 
			sumMark = testMark1 + testMark2 + examMark1 + examMark2;
		}
		void showMark(){
			//cout <<setw(15) << "testMark1" << setw(15) << "testMark2" << setw(15) 
			//<< "examMark1" << setw(15) << "examMark2" << setw(15) << "sumMark";
			cout << setw(15) << testMark1 << setw(15) << testMark2 << setw(15) 
			<< examMark1 << setw(15) << examMark2 << setw(15) << sumMark;
		}
};

class student{
	public: 
		int id;
		string name;
		int age;
		string className;
		subject math;
		subject physics;
		subject chemistry;
	public:
		void setInfo(){
			cout << "Input Student Info: " << endl;
			cout << "id(integer number): "; cin >> id;
			fflush(stdin);
			cout << "name: "; getline(cin, name);
			cout << "age: "; cin >> age;
			fflush(stdin);
			cout << "class name: "; getline(cin, className);
		}
		void showInfoStudent(){
			cout << setw(5) << id << setw(30) << name << setw(5) << age << setw(10) << className;
		}
		void showMarkStudent(){
			cout << "Input subject (1 - Math; 2 - Physics; 3 - Chemistry): " << endl;
			int choose;
			cin >> choose;
			switch(choose){
				case 1: math.showMark();
				case 2: physics.showMark();
				case 3: chemistry.showMark();
				default: cout << "Wrong choose!";
			}
		}
		void showFull(){
			cout << setw(5) << id << setw(30) << name << setw(5) << age << setw(10) << className 
			<< setw(15) << math.sumMark << setw(15) << physics.sumMark << setw(15) << chemistry.sumMark;
		}
};
student Student[20];

class grade{
	public: 
		string className;
		int year;
	public:
		void setInfo();
		void getInfo();
		
		void showAllStudentOfClass(){
			fflush(stdin);
			cout << "Input name of class: ";
			string nameOfClass;
			getline(cin, nameOfClass);
			cout << "Class: " << nameOfClass << endl;
			for(int i=0; i<20; i++){
				if (Student[i].className == nameOfClass);
					Student[i].showFull();
			}
		}
};


void showOneStudent(){
	cout << "Input ID of Student: ";
	int id;
	for(int i=0; i<20; i++){
		if(Student[i].id == id){
			Student[i].showInfoStudent();
			cout << endl;
			Student[i].showMarkStudent();
			break;
		}
	}
}

void showAllStudent(){
	for(int i=0; i<20; i++){
			Student[i].showInfoStudent();
			cout << endl;
	}
}



int main(){
	
	for(int i=0;i<20;i++){
		
	}


	return 0;
}




