#pragma once
#include "Product.h"

class Vehicle: public Product{
public:
	void SetPrice(const int price){
		Product::SetPrice(price);
	}
	Vehicle(const unsigned int x): Product(x) {}
	virtual void SetMaxSpeed(const int x){
		m_maxspeed=x;
	}
	void Print(){
		std::cout<<"This is a vehicle with max speed of "<<m_maxspeed<<std::endl;
	}

	virtual void Move () const{
		std::cout<<"Moving with speed "<<m_maxspeed<<std::endl;
	}

	virtual ~Vehicle() {};


	int m_maxspeed;


};

