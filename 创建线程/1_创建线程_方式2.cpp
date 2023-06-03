#include<iostream>
#include<thread>

using namespace std;
void test() {
	cout << "main::子线程2开始执行" << endl;
	cout << "main::子线程2结束执行" << endl;
}
class my_print {
public:
	void operator()() {
		cout << "子线程1开始执行" << endl;
		thread obj2(::test);//调用全局作用域下的test()函数
		obj2.join();
		cout << "子线程1结束执行" << endl;
	}
	void test() {
		cout << "my_print::子线程2开始执行" << endl;
		cout << "my_print::子线程2结束执行" << endl;
	}

};
int main() {
	my_print my1;
	thread obj1(my1);
	obj1.join();
	return 0;
}