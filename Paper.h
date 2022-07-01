#include "Date.h"
#include <vector>
#include <map>
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
    map<string, int> words;

    bool editor_standard();

    bool have_three_part();

public:

    void check_grace();

    void set_grace();

    static int persent_simile(Paper a, Paper b);

    Paper get_in_console();
};
// todo show all data
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

Paper Paper::get_in_console()
{
    cout << "enter paper\'s name:";
    cin >> this->name;
    cout << "enter paper\'s create date:\n";
    //cin >> this->date;
    // todo
    return *this;
}

int Paper::persent_simile(Paper a, Paper b)
{
    // todo
    return 0;
}

bool Paper::editor_standard()
{
    // todo
    return true;
}

bool Paper::have_three_part()
{
    // todo
}

void set_grace()
{
    // todo persent_simile(this, all other) + algorithm
    // todo editor_standard is true
    // todo 100 < words < 5000
    // todo name.words < 12
    // todo i in words | i < 50


}
