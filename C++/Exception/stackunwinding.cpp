#include <iostream>

using namespace std;

void Func03()
{ 
    throw 0;
}
void Func02() 
{ 
    Func03(); 
}
void Func01() 
{	
    Func02(); 
}

int main(void)
{
	try
	{
		Func01();
	}
	catch (int ex)
	{
		cout << "예외 처리(main) : " << ex << endl;
	}
	return 0;
}