#include<iostream>
#include<string>
using namespace std;
int main(){
	string w;
	cout << "Nhap W = ";
	getline(cin,w);
	while(w[0]==' '){
		w.erase(w.begin(),w.begin()+1);
	}
	int a=w.size()-1;
	while(w[a]==' '){
		w.erase(w.begin()+a,w.begin()+a+1);
		a--;
	}
	for(int i=0;i<w.size();i++){
		if(w[i]==' ' && w[i+1]==' '){
			w.erase(w.begin()+i,w.begin()+i+1);
			i--;
		}
	}
	cout << "Chuan hoa = " << w;
	return 0;
}
