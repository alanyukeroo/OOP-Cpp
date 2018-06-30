/* 	O LOKAL ;
	 1 Import
*/
#include<iostream>
#include<algorithm>
#include<map>
#include <vector>
#include<string>
#include<typeinfo>
#include <stdlib.h>
using namespace std;
class Konter {
	private :
	bool status;
	public:
	void setStatus(bool status){
		this->status = status;
	}
	bool getStatus(){
		return status;
	}
};
class Handphone {
	public:
		Handphone();
		Handphone(string name, int price ,int stok,string code){
			this->namea = name;
			this->price = price;
			this->stocks = stok;
			this->code = code;
		}
		~Handphone(){
			
		}
		string getCode(){
			return code;
		}
		string getName(){
			return namea;
			
		}
		int getPrice(){
			return price;
		}
		int getStocks(){
			return stocks;
		}
		
		void setCode(string code){
			this->code = code;
		}
		void setName(string name){
			this->namea = name;
		}
		void setPrice(int price){
			this->price = price;
		}
		void setStocks(int stok){
			this->stocks = stok;
			
		}
		
		
	private:
	string code;
	string namea;
	int price;
	int stocks;
};
//var index phone
int sum=3;
bool jenis(int x);
vector<Handphone> hp_import;
//vector<handphone> hp_lokal;
void initData(vector<Handphone>&);
void showData(int jenis);
void menuUtama();
void insertPhone(bool x,vector<Handphone>&);
void sellPhone(bool x, vector<Handphone> & newClass);
void displayPhone(bool x,vector<Handphone> &);
Konter konter;

//var 
string nama, harga;
int stok,kode;

		vector<Handphone> myHp;
int main(){
	int pilihan ;
	
	initData(myHp);
	vector<Handphone> hp_lokal;
	string s, item ; 
	while (1){
	cout<< "Bluejack Celuler \n";
	cout<< "===============\n";
	cout<<	"1. Local Product\n";
	cout<< 	"2. Import Product\n";
	cout<< "choose";
	cin>> pilihan;
	switch(pilihan){
		case 1 :
			konter.setStatus(0);
			menuUtama();
		break;	
		case 2 :
			konter.setStatus(1);
			menuUtama();
		break ;
		
		}
		return 0;
	
	}
}

void menuUtama(){
		cout<< "Handphone Count : " <<myHp.size()<<endl;
		cout << "=================\n";
		cout<<   "     MAIN MENU       \n";
		cout << "1. Insert New Phone\n";
		cout << "2. Sell Phone\n";
		cout << "3. View Phone List \n";
		cout << "4. Exit \n";
		cout << "Choose ..";
		int pil ;
		cin>> pil;
		switch (pil){
			case 1 :
				insertPhone(konter.getStatus(),myHp );
			break;
			case 2:
				sellPhone(konter.getStatus(),myHp);
			break;
			case 3: 
				displayPhone(konter.getStatus(),myHp);
			break;
		}
}

void initData (vector<Handphone>& newPhone){
	if(konter.getStatus()==0){
		Handphone newPhon("BLACKBERRY",20000000,20,"YZUIQ");
		newPhone.push_back(newPhon);
		Handphone newPhon1("SAMSUNG",20000000,20,"YZUIQ");
		newPhone.push_back(newPhon1);
		Handphone newPhon2("Nokia",20000000,20,"YZUIQ");
		newPhone.push_back(newPhon2);
		
	}else if (konter.getStatus()==1){
		Handphone newPhon("BLACKBERRY",20000000,20,"13234");
		newPhone.push_back(newPhon);
		Handphone newPhon1("SAMSUNG",20000000,20,"24121");
		newPhone.push_back(newPhon1);
		Handphone newPhon2("Nokia",20000000,20,"23511");
		newPhone.push_back(newPhon2);	
	}
}

void sellPhone(bool x, vector<Handphone> & newClass){
	unsigned int size = newClass.size();
	int pil,qty,payment;
	for(int i =0; i<size; i++ ){
		cout<<i<< ".>\t Code\t : " << newClass[i].getCode()<<endl;
		cout<< "\t Name\t :" <<newClass[i].getName()<<endl;
	}
	cout<< "Input number of phone ";
	cin>> pil;
		int stokq= newClass[pil].getStocks();
		cout<<" Code\t : " << newClass[pil].getCode()<<endl;
		cout<< "\t Name\t :" <<newClass[pil].getName()<<endl;
		cout<< "\t Price \t:"<< newClass[pil].getPrice()<<endl;
		cout<< "\t Stocks \t"""<< stokq<<endl;		
		cout<< "Input QTY to sell [1.. stocks]";
		cin>>qty;
	
		int total = qty * newClass[pil].getPrice();
		cout<< "Payment"<<total;
		cin>> payment;
		cout<< "Your Charge "<< payment -total<<endl;
		cout<<"success Sell Phone";
		system("pause");
		menuUtama();
}

void displayPhone(bool x, vector<Handphone> & newClass){
	unsigned int size = newClass.size();
	cout<< "VIEW HANDPHONE LIST\n";
	cout<< "====================\n";
	for (unsigned int  i= 0; i<size; i++){
		cout<<i<< ".>\t Code\t : " << newClass[i].getCode()<<endl;
		cout<< "\t Name\t :" <<newClass[i].getName()<<endl;
		cout<< "\t Price \t:"<< newClass[i].getPrice()<<endl;
		cout<< "\t Stocks \t"""<< newClass[i].getStocks()<<endl;
		cout<< endl;
	}
		system("pause");
		menuUtama();
}

void insertPhone(bool x,vector<Handphone>& newPhone){
	string nama, randomString;
    int harga, stok, randomNumber = 0;

	do {
        cout << "masukkan nama smartphone [10-30] : ";
        getline(cin, nama);
    } while(nama.length() < 10 or nama.length() > 30);
 
    do {
        cout << "masukkan harga smartphone [Rp. 1.000.000 - Rp. 6.000.000] : ";
        cin >> harga; 
    } while(harga < 1000000 or harga > 6000000);
 
    do {
        cout << "masukkkan stok smartphone [5 - 100] : ";
        cin >> stok; 
    } while(stok < 5 or stok > 100);
    if(x ==0){
    	Handphone newPhon(nama,harga,stok,randomString);
		newPhone.push_back(newPhon);
	}else if(x==1){
		Handphone newPhon(nama,harga,stok,randomString);
		newPhone.push_back(newPhon);	
	}
	
// 	Handphone(string name, int price ,int stok,string code)
		
		system("pause");
		menuUtama();
}
