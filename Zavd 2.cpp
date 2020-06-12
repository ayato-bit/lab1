#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main(int argc, char* argv[])
{
	srand(time(NULL));
	int *asp = new int[10];
	cout << "asp: ";
	for (int i = 0; i < 10; i++) {
		asp[i] = rand() % 10 + 1;
		cout << asp[i] << " ";
	}
	for (int i = 1; i < 10; i++) {
		for (int j = 0; j < 9; j++) {
			if (asp[j] < asp[j + 1]) {
				int x = asp[j];
				asp[j] = asp[j+1];
				asp[j + 1] = x;
			}
		}
	}
	cout << endl;
	cout << "asp: ";
	for (int i = 0; i < 10; i++) {
		
		cout << asp[i] << " ";
	}
	delete[]asp;
	return 0;

}