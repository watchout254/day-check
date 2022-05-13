#include <iostream>

using namespace std;

int main() {
	cout<<"\t\t\tWelcome to day check by entering number 1 - 7:";
	cout<<"\nHINT: First day of the week is Sunday.";
	int days;
	cout<<"\nEnter any number(1-7): ";
	cin>>days;
	
	switch (days) {
		case 1:
		cout<<"\nIt's Sunday.";
		break;
		
		case 2: 
		cout<<"\nIt's Monday. ";
		break;
		
		case 3:
		cout<<"\nIt's Tuesday. ";
		break;
		
		case 4:
		cout<<"\nIt's Wednesday. ";
		break;
		
		case 5:
		cout<<"It's Thursday. ";
		break;
		
		case 6:
		cout<<"It's Friday. ";
		break;
		
		case 7:
		cout<<"It's Saturday. ";
		break;
		
		default: 
		cout<<"Sorry....there is nothing like that.";
	}
	
	cout<<"\nThank you..check other days.";
		
}
