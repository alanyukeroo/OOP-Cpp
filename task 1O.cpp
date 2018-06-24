// pointers to base class
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
class Shape {
  protected:
    int width, height;
  public:
   virtual void set_values (int a, int b){
	   width=a; height=b; 
	}
};

class Rectangle: public Shape {
  public:
    int area(){ 
	  	return width*height; 
	  }
	  int round(){
	  	return 2* (width +height);
	  }
};

class Triangle: public Shape {
  public:
    int area(){ 
	  return width*height/2; 
	}
	int round(){
	  	return 2* sqrt(width*2 + height*2  ) + width;
	}	
};
class Parallelogram: public Shape {
	private:
		int hypo;
	public :
		void set_values(int a, int b, int c){
	   		width=a; height= b; hypo = c;
		}
		int area(){
			return width*height; 
		}
		int round(){
	  		return 2* (hypo+width);
		}	
};

int main () {
	
  Rectangle rect;
  Triangle trgl;
  Parallelogram para;
  
  Shape * ppoly1 = &rect;
  Shape * ppoly2 = &trgl;
  Shape * ppoly3 = &para;
  

	int pilihan ;
	int wid,hei;
	cout<<"BlueJack Calculate Shape  \n";
	cout<<"==========================\n";
	cout<< "1. Rectangle\n";
	cout<< "2. Triangle \n";
	cout<< "3. Parrelopgram\n";
	cout<< "4. Exit \n";
	cin >> pilihan;
	switch (pilihan){
		case 1 : 
			cout<<"Masukan Widht 3 .. 2O";
			cin >> wid;
			while (wid <3 || wid >20){
				cout<<"Masukan Widht";
				cin >> wid;
			}
			cout<< "Masukan Heigh";
			cin>> hei;
			while (hei <3 || hei >20){
				cout<<"Masukan Widht 3 .. 2O";
				cin >> wid;
			}
		 	ppoly1->set_values (wid,hei);
		 	for(int i = 0; i<7; i++){
		 		for (int j= 0; j<7;j++){
		 			cout<<"*";
				 }
				 cout<<endl;
			 }
			cout << "Area Rectangle "<<rect.area() << '\n';
			cout<< "Round Rectangle "<< rect.round()<< '\n';
			system("pause");
			system("cls");
			main();
		break;
		case 2:
			cout<<"Masukan Widht";
			cin >> wid;
			while (wid <3 || wid >20){
				cout<<"Masukan Widht";
				cin >> wid;
			}
			cout<< "Masukan Heigh";
			cin>> hei;
			while (hei <3 || hei >20){
				cout<<"Masukan Widht 3 .. 2O";
				cin >> wid;
			}
		 	ppoly2->set_values (wid,hei);
			cout << "Area Rectangle "<<trgl.area() << '\n';
			cout<< "Round Rectangle "<< trgl.round()<< '\n';
			system("pause");
			system("cls");
			main();
			break;
		case 3:
			int hy;
			cout<<"Masukan Widht";
			cin >> wid;
			while (wid <3 || wid >20){
				cout<<"Masukan Widht";
				cin >> wid;
			}
			cout<< "Masukan Heigh";
			cin>> hei;
			while (hei <3 || hei >20){
				cout<<"Masukan Widht 3 .. 2O";
				cin >> wid;
			}
			cout<< "Masukan sisi miring";
			cin>> hy;
			while (wid <6 || wid >11){
			cout<< "Masukan sisi miring";
				cin >> hy;
			}
		 	para.set_values(wid,hei,hy);
			cout << "Area Rectangle "<<para.area() << '\n';
			cout<< "Round Rectangle "<< para.round()<< '\n';
			system("pause");
			system("cls");
			main();
			break;		
	}
  return 0;
}
