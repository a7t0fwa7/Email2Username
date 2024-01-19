#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string email = "pranayarout88@gmail.com";
    int i = (int) email.find('@');
    string uname = email.substr(0, i);
    cout << "Email is " << email << endl;
    cout << "Username is " << uname << endl;
    return 0;
}