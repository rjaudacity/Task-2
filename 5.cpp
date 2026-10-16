#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int speed;

    cout << "Enter car speed: ";
    cin >> speed;

    if (speed > 60) {
        cout << "Over the speed limit";
    } else {
        cout << "Safe speed";
    }

    return 0;
}
