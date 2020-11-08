#include <iostream>
using namespace std;
void fun1();
void fun2();
int main()
{
	cout<<"begin"<<"\n";
	fun1();
	fun2();
	cout<<"end";

}
void fun1()
{
	cout<<"fun1"<<"\n";
}
void fun2()

{
	cout<<"fun2";
}