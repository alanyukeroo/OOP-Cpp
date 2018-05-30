#include<iostream>
#include<string>
#include<stdlib.h>
#include <cctype>

using namespace std;
class Nama{
	private:
		string nama;
	public:
		void setName(string nama){
			this->nama = nama;
		}
		string getName(){
			return nama;
		}
};



void menuUtama();
void menuSub();
Nama nama;
	string menu[]= {"1. Append your setting","2. Eraser your setting","3. Replace your string","4. Substring","5. Back to Main"};
int main(){
	string name;
	do{
		cout<< "Input your String \n";
		getline(cin,name);
		nama.setName(name);
	}while(name == " ");
	menuUtama();

}
void menuUtama(){
	system("cls");
	int pil;
	cout<< "\n Your String :"<<nama.getName()<<endl;
	cout<< "1. Manipulate Your String\n";
	cout<< "2. View your string \n";
	cout<< "3. Exit \n";
	cin>> pil;
	switch(pil){
		case 1: 
			menuSub();
		break;
		case 2:
			cout<< "size"<< nama.getName().length();
			cout<<"\ncapacity" << nama.getName().length();
			
	string a = nama.getName();
    int count;
    for(int i=0;a[i]!='\0';++i)
    {
        if(a[i]==' ')
            count++;
    }
    
    cout<<"\nThere are "<<count<<" words in the given string";
 
			
		break;
	}
	
}
void menuSub(){
	system("cls");
	int pilh;

		for(int i = 0; i<4; i++){
			cout<<menu[i]<<endl;
		}
		cout<< "Choose";
		cin>> pilh;
		if (pilh ==1) {
				string get_input;
				cout<< "Input apend string\n";
				cin>> get_input;
				nama.setName(nama.getName()+get_input);
				cout<< "your string append\n"<< nama.getName();
				
		}else if (pilh ==2){
				int start_index, start_eraser;
				int lenght_string = nama.getName().length();
				cout<< "Input start index [0.. " <<  lenght_string<<"] \n";
				cin>> start_index;
				cout<<"Input count to eraser[1]"<< lenght_string- start_index<<"]";
				cin>> start_eraser;
				string laststring = nama.getName().erase(start_index, start_eraser);
				nama.setName(laststring);
				cout<< laststring;
		}else if (pilh ==3 ){
				string name;
				int a,b;
				cout<< "Input string to replace ";
				cin>> name;
				cout<<"input start index[o..2.o]";
				cin>> a;
				cout<<"input count to replace";
				cin>>b;
				string c = nama.getName();
				for( int i =a ; i < b;i++ ){
					cout<< i++;
//					c[i]=name[i];
				}
				nama.setName(c);
				cout<< nama.getName();
		}
	
}
