#include <iostream>
#include <string>
#include <windows.h>
#include <mysql.h>
#include <stdio.h>
using namespace std;

class Simantri(){
	private:
		int id;
		string nama,poli;
	public:
	
		void setNama(string nama){
			this->nama = nama;
		}
		void setPoli(string poli){
			this->poli = poli;
		}
		string getNama(){
			return nama;
		}
		string getPoli(){
			return poli;
		}
}
class Admin : public Simantri{
	private: 
	int stat;
	public:
	void setStatus(int stat){
		this->stat =stat;
	}
	int getStatus(){
		return stat;
	}
	
}
void menuUtama();
void menuUtama(){
	cout<<"Selamat Datang di RS MANTRI\n";
    cout<<"===========================\n";
    cout<<"1.Lihat Data Pendaftaran Pasie\n";
}
int main()
{
    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES *res;
    int qstate;

    conn = mysql_init(0);
   // if(conn)
      //  cout<<"connection object ok, conn="<<conn<<endl;
    //else
        //cout<<"conn object problem: "<<mysql_error(conn);

    conn = mysql_real_connect(conn,"localhost","root","","simantri",0,NULL,0);

    if(conn){
        //string user,pass;
        cout<<"connected to database simantri"<<endl;
        cout<<"Login....\n";
        char user[100], password[100];
        cout<<"Username\n";

        scanf("%s",user);
        cout<<"Password";
        scanf("%s",password);
        char query[500];

        sprintf(query, "SELECT * FROM admin WHERE user=\'%s\' && pass=\'%s\'", user, password);


        qstate = mysql_query(conn,query);
        res = mysql_store_result(conn);
        if(mysql_num_rows(res)>0){
         	
        }else{
            cout<<"gagal";
        }

    }
    else{
        cout<<"connection problem: "<<mysql_error(conn)<<endl;
    }

    mysql_close(conn);

    return 0;
}

