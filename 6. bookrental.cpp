#include <iostream>
#include <string>
using namespace std;
int nil=-1;
class Booking{
  private :
  int qty,price,subtotal;
  string title;
  int nilai;
  
public:
  void setNilai(int nlai){
    this->nilai=nlai;
  }
  int getNilai(){
    return nilai;
  }
  int getTotal(){
    return qty * price;
  }
  void GetData()  {	
  system("cls");
    do{
      cout<<"\n\tInput the book title [5-2o] : ";
      getline(cin,title);
    }while(title.length()<5 || title.length()>20);

    do{
      cout<<"\n\tInput book price [Rp. 5ooo.. 1oooo]";
      cin>>price;
      
    }while(price<5000 || price>10000);
    do{
      cout<<"\n\t Input book qty [1..2o] : ";
      cin>>qty;	
    }while(qty>20 || qty<1);   
  }
  
  void SetNull(){
    price=0;
    nilai=0;
	qty=0;
    title="";
  }
  void PutData(int i)
  {
    if(qty==0|| title==""||price==0){
      cout<<"";
    }else{
      
      cout<<"\n"<<i<<"\t\t";
      cout<<title<<"\t\t"<<qty<<"\t\t"<<price<<"\t\t"<<getTotal();
    }
  }
  
};
Booking B[10];
void deleteData();
void RentBook();
int main(){
  
  int option;
  do{
    
    cout<<"\n"<<"Welcome to Nany's Bookrental !"<<endl;
       cout<<"============================================="<<endl;
    string menu[]= {"1. Rent a book","2. View all rent books","3. Delete all","4. Exit"};
    for(int i =0; i<=3 ;i++){
      cout<<menu[i]<<endl;
    }
    //    cout<<b.getNilai()
    cout<<"Choice";
    cin>>option;
    switch(option){
      case 1 : 
      RentBook();
      break;
      case 2:
       system("cls");
      cout<<"NO\t\t|TITLE\t\t|QTY\t\t|PRICE\t\t|SUBTOTAL|"<<endl;
      cout<<"============================================="<<endl;
      for(int i=0;i<=10;i++){
        
        B[i].PutData(i+1);	  
      }
      
      break;
      case 3 :
      deleteData();
      break;
      case 4:
      break;
    }
  }while(option!=4);
  
}
void deleteData(){
  for(int i;i<10;i++){
    B[i].SetNull();
  }
}
void RentBook(){
  Booking *S;
  S= new Booking[10];
  nil=nil+1;
  cout<<nil<<endl;
  S->setNilai(nil);
  if(S->getNilai()<=9){
    B[S->getNilai()].GetData();
  }
  else{
    cout<<"DATA SUDAH FULL"<<endl;
  }
}
