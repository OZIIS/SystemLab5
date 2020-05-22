#include <iostream>
#include <stdio.h>
#include <string>
#include <cctype>
#include <stdlib.h>
using namespace std;
int main() {
	string s="12+-E 15";
	string f[100];
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ') {
			for (int j = 0; j < i; j++) {
				f[j] = s[j];
				if (s[j]*1 != s[j] ) {
					cout << "Element" << j << "is Float" << endl;
				}
				if (s[j] >= '0' && s[j] <= '9') {
					if (s[j] < '0') {
						cout << "Element " << j << " - Number"<<endl;
					}
					else {
						cout << "Element " << j << " + Number"<<endl;
					}
				}
			}
		}
		
	}
	return 0;
}
