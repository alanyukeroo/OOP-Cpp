#include <iostream>
#include <string>

using namespace std;

class enkripsi{
	private :
	string sandi;
	public :
	void set(string masuk){
		this->sandi=masuk;
	}
	
	string get(){
		return this->sandi;
	}
	
	void kunci(int sandi){
		char bantu;
		for(int i=0;this->sandi[i]!='\0';++i){
	        bantu=this->sandi[i];
	        if(bantu>='a' && bantu<='z'){
	            bantu=bantu+sandi;
	            if(bantu>'z'){
	                bantu=bantu-'z'+'a'-1;
	            }
	            this->sandi[i]=bantu;
	        }
	        else if(bantu>= 'A' && bantu<= 'Z'){
	            bantu=bantu+sandi;
	            if(bantu>'Z'){
	                bantu=bantu-'Z'+'A'- 1;
	            }       
	            this->sandi[i]=bantu;
	        }
	    }
	}
	
	void buka(int sandi){
		char bantu;
		for(int i=0;this->sandi[i]!='\0';++i){
			bantu=this->sandi[i];
			if(bantu>='a' && bantu<='z'){
				bantu=bantu-sandi;
				if(bantu<'a'){
					bantu=bantu+'z'-'a'+1;
				}
				this->sandi[i]=bantu;
			}
			else if(bantu>='A' && bantu<='Z'){
				bantu=bantu-sandi;
				if(bantu>'a'){
					bantu=bantu+'Z'-'A'+1;
				}
				this->sandi[i]=bantu;
			}
		}
	}
};

int main(){
	enkripsi super;
	int choice, sandi;
	string masuk;
	
	cout<<"Input Your String : ";
	getline(cin,masuk);
	super.set(masuk);
	
	cout<<"Enter the number of Key Encryption : ";
	cin>>sandi;
	super.kunci(sandi);
return 0;
}

