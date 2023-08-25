#include<iostream>
using namespace std;
class your;
class my
{
private:
	int a;
public:
	int b;
protected:
	int c;
	friend your;
};
class your
{
public:
	my m;
	void fun()
	{
		cout << m.a << endl;
	}
};
int main()
{
	your y;
	y.fun();
}