#include <iostream>
#include <string>
using namespace std;

int main() {
		
	string ID[3];
	string *ptr = ID;
	
	ptr = new string[3];
	cout<<"Name:";
	//cin>>ID[0];
	getline(cin,ID[0]);

	cout<<"Surname:";
	getline(cin,ID[1]);
	
	cout<<"School";
	getline(cin,ID[2]);
	
	cout<<"Department";
	getline(cin,ID[3]);
	
//	for(i=0,i<)
	
	
	
	
	delete [] ptr;
	
	return 0;
}
