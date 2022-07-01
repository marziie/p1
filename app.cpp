#include <iostream>
#include <vector>
using namespace std;

class A
{
public:
    int uid;
    A(){};
    void get_in_console()
    {
        cin >> uid;
    }
};

int main()
{
    vector<A> vec;
    vec.push_back(A().get_in_console());

}
