#include <iostream>
using namespace std;

class Employee {	
	public:
		string name;		
		int employeeID;
		int salary;
		static int id;
		static int employeeCount;
		
		Employee(string name, int salary)
		{
			this->name = name;
			this->salary = salary;			
			employeeID = ++id;				
			employeeCount++;
		}
		
		void DisplayInformation()
		{
			cout << "Employee Name: " << name << endl;
			cout << "Employee ID: " << employeeID << endl;
			cout << "Salary: " << salary << endl;
		}
		
};

int Employee::employeeCount = 0;
int Employee::id = 1000;

int main()
{
	Employee e1("Muaviyah", 0);
	Employee e2("Hassaan", 2);
	Employee e3("Hasnain", 20);
	Employee e4("Waseem", 2525);
	
	e1.DisplayInformation();
	e2.DisplayInformation();
	e3.DisplayInformation();
	e4.DisplayInformation();
	cout << "Total number of employees: " << Employee::employeeCount << endl;
	
	Employee e5("Ahsen" , 3);
	
	cout << "Total number of employees: " << Employee::employeeCount << endl;	
}