#include<iostream>
using namespace std;

class Distance{
	public:
		int feet;
		float inc;
};

int main(){
	
	Distance d1,d2,sum;
	
	cout<<"Enter the Feet and inches : "<<endl;
	//For d1
	cout<<"For Distance 1:"<<endl;
	cout<<"Feet : "<<endl;
	cin>>d1.feet;
	cout<<"Inches : "<<endl;
	cin>>d1.inc;
	cout<<endl;
	
	//For d2
	cout<<"For Distance 2:"<<endl;
	cout<<"Feet : "<<endl;
	cin>>d2.feet;
	cout<<"Inches : "<<endl;
	cin>>d2.inc;
	cout<<endl;
	
	sum.feet = d1.feet + d2.feet;
	sum.inc =  d1.inc + d2.inc;
	
	while(sum.inc>12){
		sum.inc-=12;
		sum.feet++;
	}	
	
	cout<<"Sum of Distances"<<endl;
	cout<<"Feet : "<<sum.feet<<endl;
	cout<<"Inches : "<<sum.inc<<endl;
	
	system("pause");
	return 0;
}
