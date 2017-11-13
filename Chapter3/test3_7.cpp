/*************************************************************************
    > File Name: test3_6.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年11月10日 星期五 20时08分12秒
 ************************************************************************/

#include <iostream>
using namespace std;

int
main(void)
{
	string s("HELLO world!");
	cout<<"before change: "<<s<<endl;
	for(char &c : s)
		c = 'X';
	cout<<"after change: "<<s<<endl;
}
