#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
int password;

    cout << "Enter password: ";
    cin >> password;

    if (password == 1234) {
        cout << "Access granted";
    } else {
        cout << "Access denied";
    }

    return 0;
}
