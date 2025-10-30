#include <iostream>
using namespace std;

int main()
{
 	
 		float a, b, hasil;
 		
 		char operasi;
 	
	 
	
 	cout << "Masukkan angka: ";
	cin >> a;	 
 	cout << "Masukkan operasi (+,-,*,/): ";
 	cin >> operasi;
 	cout<< "Masukkan angka: ";
 	cin>>b;
 	
// dengan Switch case
 	
 	switch(operasi)  {
 			case '+':
 		hasil = a+b;
 		cout<<a<<"+"<<b<<"="<<endl;
		break;
		case '-':
 		hasil = a-b;
 		cout<<a<<"-"<<b<<"="<<hasil<<endl;
		break;
			case '*':
 		hasil = a*b;
 		cout<<a<<"*"<<b<<"="<<hasil<<endl;
 		break;
 			case '/':
 			if (b!=0){
 				hasil = a/b;
 		cout<<a<<"/"<<b<<"="<<hasil<<endl;
 	}
 		else{
 			cout<<"Tidak boleh 0"<<endl;
		 }
			 break;
 	}
	 
	 
	 //dengan if else
	 
	 if (operasi=='+'){
	 	hasil = a+b;
	 	cout<< a<<"+"<<b<< "="<<hasil<<endl;
		}
	else if (operasi=='-'){
	
	 	hasil = a-b;
	 	cout<< a<<"-"<<b<< "="<<hasil<<endl;
		}		
	else if (operasi=='*'){
	 	hasil = a*b;
	 	cout<< a<<"*"<<b<< "="<<hasil<<endl;
		}
	 else if (operasi=='/'){
	 	if (b!=0){
	 	hasil = a/b;
		 cout<< a<<"/"<<b<< "="<<hasil<<endl;
		 }
		 else{
		 	cout<<"Tidak boleh 0"<<endl;
		 }
 
}
return 0;
}
