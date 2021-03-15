
#include<iostream>
using namespace std;
int main() {
	string crc,encoded;
	cout<<"Enter the encoded(message) bits:";
	getline(cin,encoded);
	cout<<"Enter the CRC Polynomial bits:";
	getline(cin,crc);
	int n =crc.length();
	// Aplying bitwise Xor
	for(int i=0;i<=encoded.length()-n; ){
		for(int j =0;j<n;j++)
		   encoded[i+j] =encoded[i+j]==crc[j]?'0':'1';
		for(;i<encoded.length()&& encoded[i]!='1';i++);   // to check till we got 1.
	}
    for(string i: encoded.substr(encoded.length()- n+1) ) 
	    if(i !='0'){
	   	  cout<<"There is Error";
	   	  return 0;
	cout<<"There is No Error";

}
	
	
	return 0;
	
	
	}
	
