#pragma once

class Car: public Vehicle{
public:
	Car(const unsigned int id, const int numberOfPassengers): Vehicle(id){} 

	void SetPassengersIds(const int* tab, int size){
		this->m_tab=new int[size];
		this->m_size=size;
		for(int i=0;i<size;i++) this->m_tab[i]=tab[i];
	}

	virtual ~Car(){
		delete [] m_tab;
	}

	virtual void Print(){
		std::cout<<"Car with ID=10 has "<<m_size<<" passengers"<<" with following IDs: ";
		for(int i=0;i<m_size;i++) std::cout<<m_tab[i]<<" ";
		std::cout<<". Max speed of the car is "<<m_maxspeed<<std::endl;
	}

	void Drive ()const{
		std::cout<<"Driving the car with ID="<<this->Id()<<std::endl;
	}

	virtual void Move() const{
		Drive();
	}

	int* m_tab;
	int m_size;

};