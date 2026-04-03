#include<iostream>
using namespace std;
struct person {
	int id;
	string name;
};
struct Node {
	person data;
	Node* next;

};
struct linkedlist{
	Node* head;
	

};

int main()
{
	linkedlist;
do {
	system("cls");
	cout << "--HUMAN RESOURCE--" << endl;
	cout << "1.view person" << endl;
	cout << "2.Add a person" << endl;
	cout << "3.remove a person" << endl;
	cout << "4. Find a peson by name" << endl;
	cout << "5.Export to file" << endl;
	cout << "6.Import from file" << endl;
	cout << "0.Exit" << endl;
	cout << "------------------------" << endl;
	cout << "Your command:";
	int cmd;
	cin >> cmd;
	switch (cmd) {
	case 1: {
		
		break;
	}
	case 2: {
		
		break;
	}
	case 3: {
		int id;
		cout << "Input iD to remove:";
		cin >> id;
		
		break;
	}
	case 4: {
		break;
	}
	case 5: {
		break;
	}
	case 6: {
		break;
	}
	case 0: {
		return 0;
	default:
		cout << "KHONG CO CHUC NANG NAY DAU " << endl;
	}
	}
	cout << "Go enter de tiep tuc ...";
	cin.ignore();
	cin.get();
} while (true);
return 0;
};