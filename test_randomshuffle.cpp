#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


/********************************************************************* 
 ** Function: main()
 ** Description: tests that random_shuffle is working properly
 *********************************************************************/
int main() {

	//create a new vector and fill it with 0 - 9
 	vector <int> randomTable;
 	for(int i = 0; i < 10; i++) {
 		randomTable.push_back(i);
 	}

 	//print to check
 	for (auto i = randomTable.begin(); i != randomTable.end(); i++) {
 		cout << *i << " ";
 	}

 	cout << endl;

 	// using built-in random generator, shuffle the vector so its in a random order
 	//http://www.cplusplus.com/reference/algorithm/random_shuffle/
 	random_shuffle(randomTable.begin(), randomTable.end());

 	//print ater shuffle to check
 	for (auto i = randomTable.begin(); i != randomTable.end(); i++) {
 		cout << *i << " ";
 	}

 	return 0;
}