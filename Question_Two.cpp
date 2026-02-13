#include <iostream>
using namespace std;


class Satellite
{
	public:
		const string date, ID;
		int radius;
		static int totalViews;
		
		Satellite(string ID, string date, int radius):date(date), ID(ID)
		{
			this->radius = radius;
			
		}
		
		void viewReport() const
		{
			cout << "ID: " << ID << endl;
			cout << "Date: " << date << endl;			
			cout << "Radius: " << radius << endl;
			cout << "Total times report has been viewed: " << ++totalViews << endl;
		}
		
		void calibrate(int radius)
		{
			this->radius = radius; 
		}			
};

int Satellite::totalViews = 0;
int main()
{
	Satellite s1("MA", "23-Oct", 5);
	
	s1.viewReport();
	s1.calibrate(10);
	s1.viewReport();
	
	
}