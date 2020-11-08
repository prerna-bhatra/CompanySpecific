#include <iostream>
using namespace std;
int main()
{
	int x;
	for(x=0;x<4;x++)
	{
		switch(x)
		{
			 case 2:
			 cout<<x;
			  case 0:
			 cout<<x;
			 default:
			 break;
			  case 3:
			 cout<<x;

		}
	}
}
//we should always use break with swicth case
//here  we are not using break so every case will run in casre 2 case 0 and case 2 both will run
//but after it it will brek then case 3 will run