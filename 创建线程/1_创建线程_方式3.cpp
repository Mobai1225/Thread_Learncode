#include<iostream>

#include<thread>
using namespace std;

int main() {
	auto my_lamda = [] {
		cout << "子进程开始执行" << endl;
		cout << "子进程结束执行" << endl;
	};
	thread obj1(my_lamda);
	obj1.join();
	cout << "主进程结束运行" << endl;
	return 0;
}