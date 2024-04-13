
// 练习1.1

#include <iostream>
#include <string>
using namespace std;


/*
int main()
{
    string user_name;

    cout << "Please enter your first name and last name (separated with blank): ";
    getline(cin, user_name); // 读取整行

    cout << '\n' << "Hello, " << user_name << "... and goodbye!\n";

    cin.get();

    return 0;
}
*/

int main()
{
    string first_name;
    string last_name;

    cout << "Please enter your first name: ";
    cin >> first_name; // 会读取空白字符前的字符串，并且留下输入缓冲区中的空白字符
    cout << "Please enter your last name: ";
    cin >> last_name;
    cout << "\nHello, " << first_name << " " << last_name << "... and goodbye!" << endl;
    cin.ignore(); // 清除输入缓冲区中的换行符
    cin.get();  // 等待用户按下回车键

    return 0;
}


