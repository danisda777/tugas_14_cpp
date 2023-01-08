#include <iostream>
using namespace std;

struct properti{
	string tiperumah;                  // & reference
	int kamar; 						  // * deference 
									 // struct ditaruh dalam int main (fungsi utama) juga bisa
};



int main(){
	properti pertama;
	pertama.tiperumah="Elit";
	pertama.kamar=30;
	
	string *a;
	int *b;
	
	a=&pertama.tiperumah;
	b=&pertama.kamar;
	
	cout<<"Tipe Rumah : "<<a<<endl;
	cout<<"Jumlah Kamar : "<<b<<endl<<endl;
	

	
	cout<<"Tipe Rumah : "<<*a<<endl;
	cout<<"Jumlah Kamar : "<<*b;
	
	
	
}
