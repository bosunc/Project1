#include <iostream>
#include <cstring>

using namespace std;

int main() {
	//사용자 입력
	const int Size = 15;
	char name1[Size];
	char name2[Size] = "C++Programming";

	cout << "hi how are you? I'm " << name2;
	cout << "what's your name?\n";

	cin.get(name1, Size);
	cout << "yes" << name1 << "mr";
	cout << strlen(name1) << "number\n";
	cout << sizeof(name1) << "byte size array\n";
	cout << "your name is " << name1[0] << "is started\n";
	name2[3] = '\n';
	cout << "my names first 3charachter is:" << endl;
	cout << name2 << endl;
	return 0;



}