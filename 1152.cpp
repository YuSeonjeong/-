//============================================================================
// Name        : 20180326.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
using namespace std;

int main() {

	string s;
	getline(cin, s); //���⸦ ������ ���� �Է¹ޱ�

	int num=s.size();
	int cnt=1;

	for(int i=0; i<num; i++){
		if(s[i]==' '){
			cnt++;
		}
	}

	if(s[0]==' '){cnt--;}
	if(s[num-1]==' '){cnt--;}
	cout<<cnt<<endl;
}
