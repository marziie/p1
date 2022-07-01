using namespace std;
class User
{
private:
	string name;
	string password;
	bool is_login;

	void password_is_hard();

public:

	User(string name, string password);

	void login(string password);

	void logout();

	friend ostream& operator<<(ostream& os, User const& u)
	{
		return os << u.name << '\n';
	}
};
// User u;
// cout << u;

// User u;
// u.name = "ali";
// u.password = "12345678";

// User u = User("ali", "12345678");


// User u;
// u.name = "ali";

User::User(string name, string password)
{
	this->password = password;
	password_is_hard();
	this->name = name;
	this->is_login = true;
}

void User::password_is_hard()
{
	string hard_list = "!@#$%^&*()_+=-`~";

	if (password.size() < 8)
		throw string("your password size must be larger than 8 character");

	for (auto& i : password)
	{
		for (auto& j : hard_list)
		{
			if (i == j) return;
		}
	}
	throw string("your password is too weak");
}

