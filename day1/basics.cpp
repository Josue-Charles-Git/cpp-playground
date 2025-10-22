#include <iostream>
using namespace std;

// This is the first C++ program made and uloaded to Git/GitHub

int main() {
	int a = 7;
	double b = 2.5;
	string name = "Josue";

	
	cout << (a + b) << "\n";
	cout << "Hi " << name << "\n";


	cout << "The sum is: " << a+b << "\n";
	cout << "The difference is: " << a-b << "\n";
	cout << "The product is: " << a*b << "\n";

	if(a > 5){
		cout << "big" << "\n";
	} else {
		cout << "small" << "\n";
	}

	for(int i = 0; i < 10; i++){
		cout << i + 1;
	}
	cout << "\n";
	return 0;
}
