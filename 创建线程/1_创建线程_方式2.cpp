#include<iostream>
#include<thread>

using namespace std;
void test() {
	cout << "main::���߳�2��ʼִ��" << endl;
	cout << "main::���߳�2����ִ��" << endl;
}
class my_print {
public:
	void operator()() {
		cout << "���߳�1��ʼִ��" << endl;
		thread obj2(::test);//����ȫ���������µ�test()����
		obj2.join();
		cout << "���߳�1����ִ��" << endl;
	}
	void test() {
		cout << "my_print::���߳�2��ʼִ��" << endl;
		cout << "my_print::���߳�2����ִ��" << endl;
	}

};
int main() {
	my_print my1;
	thread obj1(my1);
	obj1.join();
	return 0;
}