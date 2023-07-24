#include<iostream>
#include<string>
using namespace std;
int main(){
	string s,w;
	int p,q;
	cout << "Nhap W = ";
	getline(cin,w);
	cout << "Nhap S = ";
	getline(cin,s);
	cout << "P = ";
	cin >> p;
	cout << "Q = ";
	cin >> q;
	if(w.size()<p || w.size()<q){
		return 0;
	}
	else{
		if(q>p){
			for(int i=0;i<s.size();i++){
				w.insert(w.begin()+q,s[i]);
			}
			for(int i=0;i<s.size();i++){
				w.insert(w.begin()+p,s[i]);
			}
		}
		else{
			for(int i=0;i<s.size();i++){
				w.insert(w.begin()+p,s[i]);
			}
			for(int i=0;i<s.size();i++){
				w.insert(w.begin()+q,s[i]);
			}
		}
	}
	cout << "Ket qua: " << w;
	return 0;
}
