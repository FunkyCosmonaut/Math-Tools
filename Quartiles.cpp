#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::sort;
using std::cin;
using std::cout;
using std::endl;
using std::streamsize;

//Remember to use pointers to pass vectors and arrays 
void fillvector(vector<double> &vect){

	cout << "Please enter your numbers followed by EOF: " << endl;
	double x;
	while(cin >> x){
		vect.push_back(x);
		}
		cout << endl;
}
void sortVector(vector<double> &vect){
	sort(vect.begin(), vect.end());
}

//This one displays quartiles
void quartileFunction(vector<double> &vect){
	cout << "Quartiles: ";
	int mid = vect.size()/2;
	if(vect.size() % 2 == 0){
		cout << vect[mid/2] << ' ' << (vect[mid] + vect[mid+1])/2 << ' ' << vect[(mid+1) + (mid/2)] << endl;
	}
	else{
		cout << (vect[(mid/2)] + vect[(mid/2)+1])/2 << ' ' <<  vect[mid] << ' ' << (vect[mid + (mid/2)] + vect[(mid + 1) + mid/2])/2 << endl;

	}
}
void displayVector(vector<double> &vect){
	cout << "Sorted vector: ";
	for(int i = 0; i < vect.size(); i++){
		cout << vect[i] << " ";
	}
	cout << endl;
}

int main(){

	vector<double> numbers;
	fillvector(numbers);
	sortVector(numbers);
	displayVector(numbers);
	quartileFunction(numbers);


	return 0;
}

