#include <iostream>
using namespace std;

int main() {
	
	int *ptr;

	/*
	int size;
	int bits;
	cout << "How many bits of memory do you want to set apart?";        //if we use values as bits.
	cin >> bits;
	size = bits/4;
	*/
	
	int size;
	cout << "How many values do you want to enter?";
	cin >> size;
	
	ptr = new int[size];
	
	for(int i=0; i<size; i++) {
		
		cout << i+1<<". Value:";
		cin >> ptr[i];
	} 
		
	for (int i=0; i<size; i++) {
		
		cout << i+1<<". element in your memory:"<<ptr[i]<<endl;
	}
		
	delete [] ptr;


	return 0;
}
