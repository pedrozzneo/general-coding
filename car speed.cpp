#include <iostream>
using namespace std;

int main () {
	float car_speed, displacement, time;
	cout << "how long did the displace take? ";
	cin >> time;
	cout << "how much did it displace? ";
	cin >> displacement;
	car_speed = displacement/time;
	cout << "the average car speed was " << car_speed;
}
