#include<iostream>

#include<thread>

using namespace std;

void my_obj() {

	cout << "子线程2开始运行" << endl;
	cout << "子线程2结束运行" << endl;
}

void myprint() {
	cout << "子线程1开始执行" << endl;
	thread obj2(my_obj);
	obj2.detach();
	cout << "子线程1结束运行" << endl;
}

int main() {
	thread obj1(myprint);
	obj1.detach();
	cout << "主线程结束运行" << endl;
	return 0;
}