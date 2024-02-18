#include <iostream>
using namespace std;
int main() {
	const int SECONDS_IN_MINUTE = 60, SECONDS_IN_HOUR = 60 * SECONDS_IN_MINUTE;
	int second, minute, hour;
	cout << "Please enter the time in seconds: ";
	cin >> second;

	hour = second / SECONDS_IN_HOUR;
	second %= SECONDS_IN_HOUR;

	minute = second / SECONDS_IN_MINUTE;
	second %= SECONDS_IN_MINUTE;

	if(hour > 0) {
		cout << hour << " ";
		if(hour == 1) {
			cout << "hour ";
		
		}
		else{
			cout << "hours ";
		
		}
	}
	
	if(minute > 0) {
		cout << minute << " ";
		if(minute == 1) {
			cout << "minute ";
		}
		else{
			cout << "minutes ";
		}
	}

	if(second > 0 || (hour == 0 && minute == 0 && second == 0)) {
		cout << second << " ";
		if(second == 1) {
			cout << "second";
		}
		else{
			cout << "seconds";
		}
	
	}
	cout << endl;

}
