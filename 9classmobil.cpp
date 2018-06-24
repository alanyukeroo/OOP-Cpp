#include<iostream>
class Mobil{
	private :
		int distance,fuel,condition, capacity ;
		string name;
	public:
		void setCapacity (int capacity){
			this->capacity = capacity;
		}
		int getCapacity (){
			return capacity;
		}
		void setCond(int condition){
			this->condition = condition;
		}
		int getCond(){
			return condition;
		}
		void setFuel(int fuel){
			this->fuel = fuel;
		}
		int getFuel(){
			return fuel;
		}
		void setDistance (int distance){
			this->distance = distance;
		}
		int getDistance(){
			return distance;
		}
		void setName(string name){
			this->name = name;
		}
		string getName(){
			return name;
		}
};
class Honda: public Mobil {
	private:
		int con,dis,fuel,cap;
		string nam;
	public: 
	void setKon(int kon){
		this->con=kon;
		setCond(con);
	}
	void setNam(string nam){
		this->nam = nam;
		setName(nam);
	}
	void setDis(int dis){
		this->dis = dis;
		setDistance(dis);
	}
	void setFl(int fuel){
		this->fuel = fuel;
		setFuel(fuel);
	}
	void setCap(int cap){
		this->cap =cap;
		setCapacity(cap);
	}
};
