/*
# include <iostream>
using namespace std;

// 浮点型定义的时候，如果是float，就是 float f = 3.14f, 后面加上f，否则会默认为double类型，会多做一步转换。
// 在默认情况下，实型数值输出会保存小数点后有效数字6位。

int main() {

	float f1 = 3.14f;
	cout << "f1 = " << f1 << endl;
	double d1 = 3.1415926;
	cout << "d1 = " << d1 << endl;

	cout << "float 占用的内存空间是" << sizeof(f1) << "个字节" << endl;
	cout << "double 占用的内存空间是" << sizeof(d1) << "个字节" << endl;

	// 科学计数法（很少用）
	float f2 = 3e2;		// 如果e后面是正数，代表 3 * 10^2；
	cout << "f2 = " << f2 << endl;
	float f3 = 3e-2;	// 如果e后面是负数，代表 3 * 10^(-2)
	cout << "f3 = " << f3 << endl;

	system("pause");
	return 0;
}
*/