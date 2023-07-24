#include<iostream>
#include<string>
using namespace std;
int main(){
	string w,s;
	cout << "Nhap W = ";
	getline(cin,w);
	for(int i=0;i<3;i++){
		for(int i=0;i<w.size();i++){
			s.insert(s.end(),w[i]);
		}
	}
	cout << "Cac xau con la:" << endl;
	int m=0;
	for(int i=0;i<s.size();i++){
		m++;
		cout << s[i];
		if(m%3==0){
			cout << endl;
		}
	}
	return 0;
}
