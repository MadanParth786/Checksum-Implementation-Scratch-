#include<iostream>
using namespace std;
int main(){
	string msg,crc,encoded="";
	cout<<"Enter the message bits:";
	getline(cin,msg);
	cout<<"Enter the CRC Polynomial bits:";
	getline(cin,crc);
	int m =msg.length();
	int n =crc.length();
	encoded +=msg;
	
	
	for(int i=1;i<=n-1;i++){
        encoded+='0'; //adding zeroes to encoded one   
	}
	// Applying bitwise Xor
	for(int i=0;i<=encoded.length()-n; ){
		for(int j =0;j<n;j++)
		   encoded[i+j] =encoded[i+j]==crc[j]?'0':'1';
		for(;i<encoded.length()&& encoded[i]!='1';i++);   // to check till we got 1.
	}
	cout<<"The remainder : ";
	string rem =encoded.substr(encoded.length()-n+1);
	cout<<rem<<"\n";
	string codeword = msg+rem;
	cout<<"CODEWORD: ";
	cout<<codeword;
	
	
	
	return 0;
	
	
	}
	
