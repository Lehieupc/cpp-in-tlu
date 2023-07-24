#include<iostream>
#include<string>
using namespace std;
int main(){
	string w;
	cout << "Nhap W = ";
	getline(cin,w);
	for(int i=0;i<w.size();i++){
		if('0'<=w[i] && w[i]<='9'){
			w.erase(w.begin()+i,w.begin()+i+1);
			i--;
		}
	}
	cout << "W sau khi xoa cac chu so = " << w;
	return 0;
}
