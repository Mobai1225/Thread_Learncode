#include<iostream>

#include<thread>

using namespace std;

void my_obj() {

	cout << "���߳�2��ʼ����" << endl;
	cout << "���߳�2��������" << endl;
}

void myprint() {
	cout << "���߳�1��ʼִ��" << endl;
	thread obj2(my_obj);
	obj2.detach();
	cout << "���߳�1��������" << endl;
}

int main() {
	thread obj1(myprint);
	obj1.detach();
	cout << "���߳̽�������" << endl;
	return 0;
}