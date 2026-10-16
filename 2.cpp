#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number % 5 == 0) {
        cout << "Divisible by 5";
    } else {
        cout << "Not divisible by 5";
    }

	return 0;
}
