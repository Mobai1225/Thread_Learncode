#include<iostream>

#include<thread>
using namespace std;

int main() {
	auto my_lamda = [] {
		cout << "�ӽ��̿�ʼִ��" << endl;
		cout << "�ӽ��̽���ִ��" << endl;
	};
	thread obj1(my_lamda);
	obj1.join();
	cout << "�����̽�������" << endl;
	return 0;
}