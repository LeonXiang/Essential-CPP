
// ��ϰ1.1

#include <iostream>
#include <string>
using namespace std;


/*
int main()
{
    string user_name;

    cout << "Please enter your first name and last name (separated with blank): ";
    getline(cin, user_name); // ��ȡ����

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
    cin >> first_name; // ���ȡ�հ��ַ�ǰ���ַ����������������뻺�����еĿհ��ַ�
    cout << "Please enter your last name: ";
    cin >> last_name;
    cout << "\nHello, " << first_name << " " << last_name << "... and goodbye!" << endl;
    cin.ignore(); // ������뻺�����еĻ��з�
    cin.get();  // �ȴ��û����»س���

    return 0;
}


