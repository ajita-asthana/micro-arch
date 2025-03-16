#include <iostream>
#include <string>

string s = "Hello!";
s += " World!";

if ( s == "Hello World!") {
	cout << "Success!" << endl;
}

cout << s.substr(6, 6) << endl; // Prints "world!"
cout << s.find("world") << endl; // prints "6"
cout << s.find('1', 5); // Prints "9"
