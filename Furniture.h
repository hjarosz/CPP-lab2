#pragma once

class Furniture: public Product{
public:
	Furniture(const unsigned int id): Product(id) {}

	void Sit(){
		std::cout<<"You sit down on a chair. Nothing happens."<<std::endl;
	}

	virtual void Print(){
		std::cout<<"This is chair with ID="<<this->Id()<<std::endl;
	}

	void SetPrice(const int price){
		Product::SetPrice(price);
	}

};