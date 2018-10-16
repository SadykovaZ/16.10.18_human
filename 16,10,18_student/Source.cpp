#include<iostream>
#include<string>
using namespace std;
class human
{
	char *name;
	bool sex;
	int age;
public:
	human(const char *h_name, bool h_sex, int h_age)
	{
		name = new char[strlen(h_name) + 1];
		strcpy_s(name, strlen(h_name) + 1, h_name);
		sex = h_sex;
		age = h_age;
	}
	void setSex(bool n_sex)
	{
		sex = n_sex;
	}
	void setAge(int n_age)
	{
		age = n_age;
	}
	void setName(const char* new_name)
	{
		delete[] name;
		name = new char[strlen(new_name) + 1];
		strcpy_s(name, strlen(new_name) + 1, new_name);		
	}
	int getSex()
	{
		return sex;
	}
	int getAge()
	{
		return age;
	}
	char* getName()
	{
		return name;
	}
	void info()
	{
		cout <<"Name: "<< name << "\nSex: " << sex << "\nAge " << age << endl;
	}
	~human()
	{
		delete[] name;
	}
};
void f(int &x)
{
	x++;
}
void main()
{
	int a = 5;
	f(a);
	cout << a;

	human h("Peter", 0, 15);
	h.info();
	h.setName("Mark");
	h.info();
	system("pause");
}