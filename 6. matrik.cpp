#include<iostream>
#include<stdlib.h>
using namespace std;

class matrix{
    private :
    	int a[3][3];
    public:
    	matrix(){
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                a[i][j]=0;
            }
        }
    }
    void setData(){
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                cout<<"\n Input "<<i<<","<<j<<" element=";
                cin>>a[i][j];
                
                 while(cin.fail()) {
			        cin.clear();
			        cin.ignore(256,'\n');
			        cout<<"\n Input "<<i<<","<<j<<" element=";
			       	cin >> a[i][j];
			    }
            }
        }
    }
    void getData(){
    	if(a[0][0]== NULL){
    		cout<< "  ";
		}else{
        cout<<"\n Matrix is=\n";
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                cout<<a[i][j]<<",";
            }
            cout<<"\n";
        }
        
		}
    }
    matrix operator*(matrix x){
        matrix c;
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                c.a[i][j]=0;
                for(int k=0;k<2;k++)
                {
                    c.a[i][j]=c.a[i][j]+a[i][k]*x.a[k][j];        
                }
            }
        }
        return(c);
        
    }
};
	matrix a,b,c;
void showData();
void showResult();
int main()
{

	int pilihan;
	
		a.getData();
		b.getData();
	do{
		cout<< "\nBlue Jact Calculation Matrix 2 Dimension\n";
		cout<<"=========================================\n";
		cout<< "1. Input Matrik"<< endl<< "2. Calculate Matrik"<<endl<<"3. Exit";
		cout<<"Choose";
		cin>> pilihan;
		switch(pilihan){
			case 1:
				showData();
			break;
			case 2: 
				showResult();
			break;
			case 3 :
			break;
			default :  cout<< "nothing";
			break;
		}
	}while (pilihan != 3);
	return 0;    
}
void showData(){
	system("cls");		
	cout<<"Input Matrix 1\n";
		a.setData();
	cout<<"Input Matrix 2\n";
	    b.setData();
	    c=a*b;
	system("pause");
	system("cls");
	main();
}
void showResult(){
	system("cls");
		cout<<"Input Matrix 1\n";
		a.getData();
		cout<<"Input Matrix 2\n";
		b.getData();
		c.getData();
	system("pause");
	system("cls");
	main();
}
