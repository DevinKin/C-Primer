/*************************************************************************
    > File Name: test3_10.cpp
    > Author: King
    > Mail: arturiapendragon_1@163.com 
    > Created Time: 2017年11月10日 星期五 20时25分37秒
 ************************************************************************/

#include <iostream>
using namespace std;

int 
main(void)
{
	string sin;
	cin>>sin;
	decltype(sin.size()) count = 0;
	while(count < sin.size() && sin[count] != '\n')
	{
		if(ispunct(sin[count]))
			sin[count] = sin[count + 1];
		count++;
	}
	cout<<sin<<endl;
}
