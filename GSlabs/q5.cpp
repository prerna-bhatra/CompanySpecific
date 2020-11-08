#include <iostream>
using namespace std;
class s1
{
	public:
	void msg()
	{
		cout<<"good";
	}
};
class s2
{
public:
	void msg()
	{
		cout<<"morning";
	}
};
class s3:public s1,public s2
{
	public:
	void msg()
	{

	}
	
};
int main()
{
	s3 obj;
	obj.msg();
}