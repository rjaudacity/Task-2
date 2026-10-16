#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float bill, amountToPay;

    cout << "Enter bill amount: ";
    cin >> bill;

    if (bill >= 1000) {
        amountToPay = bill - (bill * 10 / 100);
    } else {
        amountToPay = bill;
    }

    cout << "Amount to pay: " << amountToPay;

	return 0;
}
