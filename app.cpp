#include <iostream>
#include <vector>
#include "User.h"
#include "Paper.h"
using namespace std;

class A{
public:
    static void f() {
        cout << "hello\n";
    }
};

int main()
{
    // User u;
    // u.get_password();

    A::f();
}
