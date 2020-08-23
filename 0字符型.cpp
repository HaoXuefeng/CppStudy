/*
# include <iostream>
using namespace std;

// 字符型： char ch = 'a';
// 定义字符型变量用单引号，不要用双引号，双引号是字符串；
// 单引号内只能由  一个字符 !!!    不可以是字符串 !
// 字符型变量只占    1个字节 ！
// 字符型变量并不是将字符放入内存单元，而是将字符对应的ASCII码放入存储单元（所以字符型变量也是可以输出数字的）。

int main()
{
	char ch = 'a';
	cout << ch << endl;
	cout << "字符型变量占的内存空间是：" << sizeof(char) << endl;
	
	// 字符型变量对应的ASCII码的值：  a = 97; A = 65;

	cout << "a 的ASCII码对应的值是：" << (int)ch << endl;		// 查看字符 ch 对应的ASCII码的值
	
	system("pause");
	return 0;
}
//		ASCII码 0~31分配给控制字符，32~126分配给了能在键盘上找到的字符。
*/