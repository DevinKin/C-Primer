/*************************************************************************
    > File Name: test5_25.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年11月10日 星期五 22时46分32秒
 ************************************************************************/

#include <iostream>
using namespace std;

int
main(void)
{
	int		a, b, result;
	cout<<"Please input a: ";
	cin>>a;
	cout<<"Please input b: ";
	cin>>b;
	
	try{
		result = a/b;
	}
	catch (exception err)
	{
		err.what();
		cout<<"exit";
	}

}
