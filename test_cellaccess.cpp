#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/********************************************************************* 
 ** Function: main()
 ** Description: tests my algorith for accessing a cell properly
 *********************************************************************/
int main() {

	int myArray[3][3];
	
	//hard code the array with 0-80 (values of 10)
	myArray[0][0] = 0;
	myArray[0][1] = 10;
	myArray[0][2] = 20;
	myArray[1][0] = 30;
	myArray[1][1] = 40;
	myArray[1][2] = 50;
	myArray[2][0] = 60;
	myArray[2][1] = 70;
	myArray[2][2] = 80;


	//print the array for testing
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cout << myArray[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;

	//create a vector of 9 elements (0-8)
	vector <int> testVec;
	for (int i = 0; i < 9; i++) {
		testVec.push_back(i);
	}

	//print the vector for test
	for (auto i = testVec.begin(); i != testVec.end(); i++) {
		cout << *i << " ";
	}

	cout << endl;

	//shuffle the vector
 	random_shuffle(testVec.begin(), testVec.end());

 	//print again to test
 		//print the vector for test
	for (auto i = testVec.begin(); i != testVec.end(); i++) {
		cout << *i << " ";
	}

	cout << endl;

	//impirtant test code
 	//random selection of ant/doodle for movement
 	for(auto z = testVec.begin(); z != testVec.end(); ++z) {

 		//for every vector value, translate that to a value in my array
 		int i = *z / 3; //for row
 		int j = *z % 3; //for column

 		cout << myArray[i][j] << " ";

 	}


	return 0;
}