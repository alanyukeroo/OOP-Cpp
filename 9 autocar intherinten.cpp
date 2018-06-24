#include<iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "9classmobil.h"
using namespace std;
void mainMenu();
void normalCar(int status);
void nascarCar();
	Honda honda;
		
int main (){
	
	int pilihan;
	cout<<"\n"<<"Welcome to Blue Rental !"<<endl;
  	cout<<"============================================="<<endl;
	cout<<"1. Pick Normal Car"<<endl;
	cout <<"2.Pick Nascar Car \n" ;
	cout<< "Pilihan";
	cin>>pilihan;
	while(cin.fail()){
		cout<< "Pilihan";
		cin>>pilihan;	
	}
	switch (pilihan){
		case 1 : 
			system("cls");
			honda.setKon(100);
			honda.setFuel(0);
			honda.setDis(0);
			honda.setCap(100);
			honda.setNam("Honda VG 55O");
			normalCar(1);
		break;
		case 2 : 
			system("cls");
			honda.setKon(100);
			honda.setFuel(0);
			honda.setDis(0);
			honda.setCap(150);
			honda.setNam("NASCAR GT 9OO");
			normalCar(2);
		break;
		
	}
	
	return 0;	
}
void mainMenu(){
		cout << "Car Status\n";
		cout << "Mechine  Name :" << honda.getName()<< endl;
		cout << "Distance :"<< honda.getDistance()<<endl;
		cout << "Fuel :"<< honda.getFuel()<<endl;
		cout << "Condition :"<< honda.getCond()<<endl;
		cout << "Main Menu\n";
		cout << "=========\n";
		cout << "1. Ride Your Car \n";
		cout << "2. Repair Your Car \n";
		cout << "3. Fill Your Car Fuel \n";
		cout << "4. Exit \n";
		cout << "Choose : \n";	
}

void normalCar(int status){
	
	system("cls");
	int pilihan;
	mainMenu();
		cin>> pilihan;
		switch (pilihan){
			//ride car
			case 1 : 
			/*
				here we have 2 conditional using var "status"
				status 1 is Normal car and status 2 is Nascar Car
			*/
			if (status ==1){
				//checking condition of car
				if (honda.getFuel()<= 29){
					cout<< " Your Fuel Not Enought";
					system("pause");
					normalCar(status);
				}else if(honda.getCond() == 0){
					cout<< " Your Condition Not Enought";
					system("pause");
					normalCar(status);
				}else{
					int fuel =	honda.getFuel()- 30;
					srand(time(NULL)); 
					int dis = rand()%(7-4+1)+4;
					int cond = honda.getCond() -15;
					honda.setFuel(fuel);
					honda.setCond(cond);
					honda.setDistance(dis);
				}
			//status car is Nascar
			} else {
				if (honda.getFuel()<= 49){
					cout<< " Your Fuel Not Enought";
					system("pause");
					normalCar(status);
				}else if(honda.getCond() == 0){
					cout<< " Your Condition Not Enought";
					system("pause");
					normalCar(status);
				}else{
					char kon;
					do{
						cout<< " User turbo ? y or n \n";	
						cin>> kon;
						while(cin.fail()){
							cout<< " User turbo ? y or n \n";	
							cin>> kon;
						}
					}while (kon!='y' && kon!='n');
					if(kon =='y'){
						srand(time(NULL));
						honda.setFuel(0);
						honda.setCond(0);
						int dis = rand()%(50-30+1)+30;
						honda.setDistance(dis);
					}else{
						int fuel =	honda.getFuel()- 50;
						srand(time(NULL)); 
						int dis = rand()%(10-15+1)+15;
						int cond = honda.getCond() -10;
						honda.setFuel(fuel);
						honda.setCond(cond);
						honda.setDistance(dis);
					}
				
				}
			}
				system("pause");
				normalCar(status);
			break;
			//repair car
			case 2:
				//get condion of car and compare
				if(honda.getCond() ==100){
					cout<<"Your Car Perfect\n";
					system("pause");
					normalCar(status);
				}else{
					//get last condition value
					int curr = honda.getCond();
					int num_upd=0;
					/*when curent get last value and add value to condition until 1OO
						eg : 	cur = 25
								and lopp untul 75 
					*/
					for(int i= curr; i<=100;i++){
						num_upd =+i;
					}
					honda.setKon(num_upd);
					cout<< honda.getCond();
					system("pause");
					normalCar(status);
				}
			break;
			//add fuel car
			case 3 :
				int fuel,cond;
				//check max fuel
				if(honda.getFuel() >=honda.getCapacity()){
					cout<<"Your fuel is full\n";
					system("pause");
					normalCar(status);
				}else{
					//get curent capacity fuel
					int curr = honda.getCapacity() -honda.getFuel();
					cout<< curr;
					//when fueel input <1 and fuel input more than current fuel
					do{
						cout<< "Filled your car min 1.."<<curr<<endl;
						cin>>fuel;
						
					}	while(fuel <=1 || fuel >=curr);
					honda.setFuel(honda.getFuel()+fuel);
					cout<<"Your cars fuel filled 1OO liter";
					
				}
				system("pause");
				normalCar(status);
			break;
			case 4 :
				system("cls");
				system("pause");
				main();
			break;
		}
	
}
