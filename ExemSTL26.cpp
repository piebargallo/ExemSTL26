// CPP Program to demonstrate the implementation in Map

#include <iostream>
#include <iterator>
#include <map>
using namespace std;

// Driver code
int main() {

	// empty map container
	map<int, int> gquiz;

	// insert elements in random order
	gquiz.insert(pair<int, int>(1, 40));
	gquiz.insert(pair<int, int>(2, 30));
	gquiz.insert(pair<int, int>(3, 60));
	gquiz.insert(pair<int, int>(4, 20));
	
	// printing map gquiz1
	map<int, int>::iterator itr;
	cout << "\nThe map gquiz1 is : \n";
	cout << "\tKEY\tELEMENT\n";
	
	for (itr = gquiz.begin(); itr != gquiz.end(); ++itr) 
		
		cout << '\t' << itr->first << '\t' << itr->second << '\n';
	
	cout << endl;

	return 0;

} // End driver
