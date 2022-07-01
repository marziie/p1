#include "Date.h"
#include <vector>
using namespace std;

class Paper
{
private:
	string name;
	Date date;
	string text;
	bool grace;
	bool check = false;
	vector<string> refrences;

public:
    void check_grace();

};

void Paper::check_grace()
{
    if (check)
    {
        if (grace)
        {
            cout << "accept\n";
        }
        else
        {
            cout << "reject\n";
        }
    }
    else
    {
        cout << "Paper is not checked!";
    }
}
