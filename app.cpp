#include <iostream>
#include <vector>
#include "User.h"
#include "Paper.h"
using namespace std;

vector<User> users;
vector<Paper> papers;
vector< pair<int, int> > user_paper;


void show_all_users()
{
	if (users.size() == 0)
		cout << "-- have no user!\n";
	for (int i = 0; i < users.size(); i++)
	{
		cout << i << " : " << users[i] << '\n';
	}
}

void menu()
{
	cout << "\n1.new account\n";
	cout << "2.show account\n";
	cout << "3.check grace paper\n";
	cout << "enter your number:";
}

void check_paper_id()
{
    int t;
    cout << "enter paper id:";
    cin >> t;
    if (t >= papers.size())
    {
        throw string("your paper id is not valid");
    }
    papers[t].check_grace();
}

void add_new_user()
{
    users.push_back(User().get_in_console());
}

int main()
{
	string tmp;
	do
	{
	    cout << '\n';
        try
        {
            switch (tmp[0])
            {
            case '1':
				add_new_user();
                break;

            case '2':
                show_all_users();
                break;

            case '3':

                break;
            default:
                throw string("enter valid input");
            }
	    }
		catch (string error)
		{
            cout << "-- " << error << "!\n";
        }
		menu();
		cin >> tmp;
	} while (tmp != "exit");
}

