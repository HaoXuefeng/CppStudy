
# include <iostream>

using namespace std;

// +正号，-负号，+加号，-减号，*乘号，/除号，%取余（取模），	++a前置递增，--a前置递减，a++后置递增，a--后置递减

int main() {

	int a1 = 10, b1 = 3;
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;

	cout << a1 / b1 << endl;		// 两整数相除，保留整数部分，舍去小数部分。  除数不能为 0！

	double d1 = 0.5, d2 = 0.25, d3 = 0.22, d4 = 0.3;
	cout << d1 / d2 << endl;	// 小数也是可以相除的，得出结果是整数就输出整数
	cout << d1 / d3 << endl;	// 得出结果是小数就输出小数
	cout << d1 / d4 << endl;	// 默认会保留小数点后 5位 有效数字，四舍五入。


	int a2 = 10, b2 = 3;
	cout << a2 % b2 << endl;	//取余结果为1
	int a3 = 3, b3 = 10;
	cout << a3 % b3 << endl;	//取余结果位3
	//  如果 a = 10; b = 0 呢？——————— 报错！		除数不能为 0 ! 
	//  如果 a 和 b 是小数 呢？ ——————  错误！	两个小数不能做取模运算！

	//		只有整形才能取模运算


	//		前置递增，后置递增
	int m1 = 10, n1 = 10;
	++m1;
	n1++;
	cout << "m1 = " << m1 << '\n' << "n1 = " << n1 << endl;		//  都是让变量加1；

	//		前置和后置的区别：
	//		前置：先让变量+1，然后进行表达式运算
	int m2 = 10;
	int n2 = ++m2 * 10;
	cout << "n2 = " << n2 << endl;
	//		后置：先进行表达式运算，再让变量+1。
	int m3 = 10;
	int n3 = m3++ * 10;
	cout << "n3 = " << n3 << endl;

	system("pause");
	return 0;
}
