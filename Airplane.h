#pragma once

class Airplane: public Vehicle{
public:
	Airplane(const unsigned int id): Vehicle(id){
		m_maxspeed=100;
	} 

	void SetWingspan(int wingspan){
		m_wingspan=wingspan;
	}

	void Fly () const{
		std::cout<<"Flying with the airplane with ID="<<this->Id()<<std::endl;
	}

	virtual void Print(){
		std::cout<<"A vehicle with ID="<<this->Id()<<" is an airplane with max speed of "<<m_maxspeed<<" and wingspan "<<m_wingspan<<std::endl;
	}

	virtual ~Airplane() {};

	virtual void Move() const{
		Fly();
	}

	int m_wingspan;

};