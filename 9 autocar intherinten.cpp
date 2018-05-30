#include<iostream>

using namespace std;
class Mobil{
	private :
		int distance,fuel,condition, ;
	public:
		
};
class Honda: public Mobil {
	
};
void mainMenu(){
	cout<< "Car Status\n";
	cout<< "Mechine Name \t : Honda VG 55O\n";
	cout<< "Distance \t: \n";
	cout<< "Fuel"
}

int main (){
	int pilihan;
	do{
		cout<<"1. Pick Normal Car"<<endl<<"2.Pick Nascar Car\n"};
		cout<< "Pilihan";
		cin>>pilihan;
		while(cin.fail()){
			cout<< "Pilihan";
			cin>>pilihan;	
		}
	}while(pilihan !=3);
	if(pilihan ==1){
		
	}
	return 0;	
}
