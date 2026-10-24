#include<iostream>
#include"complexe.h"
using namespace std;
#include<string>

complexe::complexe(double re, double img){
	this->re = re;
	this->img = img;
}

complexe::complexe(const complexe& c){
	this->re = c.re;
	this->img = c.img;
}

complexe complexe::operator+(complexe c) const{
	complexe* res = new complexe(0.0, 0.0);

	res->re = this->re + c.re;
	res->img = this->img + c.img;

	return *res;
}

complexe complexe::operator+(double a) const
{
	complexe* res = new complexe(0.0, 0.0);

	res->re = this->re + a;
	res->img = this->img + 0;

	return *res;

}

complexe complexe::operator-(complexe c) const{
	complexe* res = new complexe(0, 0);

	res->re = this->re - c.re;
	res->img = this->img - c.img;

	return *res;
}
complexe complexe::operator-(double a) const {
	complexe* res = new complexe(0, 0);

	res->re = this->re - a;
	res->img = this->img - 0;

	return *res;
}
complexe complexe::operator*(complexe c) const{
	complexe* res = new complexe(1,1);

	res->re = (this->re * c.re )-(this->img*c.img) ;
	res->img = (this->re * c.img) + (this->img * c.re);
	return *res;
}

complexe complexe::operator*(double a) const{
	complexe *res = new complexe(0, 0);
	
	res->re = (this->re * a);
	res->img = (this->img * a);
	return *res;
}

complexe complexe::operator/(complexe c) const{
	complexe* res = new complexe(0,0);
	
	res->re = ((this->re * c.re) + (this->img * c.img)) / ((c.re * c.re) + (c.img * c.img));
	res->img = ((this->img * c.re) - (this->re * c.img)) / ((c.re * c.re) + (c.img * c.img));

	return *res;
}

complexe complexe::operator/(double a) const{
	complexe* res = new complexe(0, 0);

	res->re = (this->re / a);
	res->img= (this->img / a);
	return *res;
}

bool complexe::operator<(const complexe& c) const {
	if (this->re < c.re) return true;    // re plus petit  -> plus petit
	if (this->re > c.re) return false;   // re plus grand  -> pas plus petit
	return this->img < c.img;            // re égaux       -> on départage par img
}

bool complexe::operator<=(const complexe& c) const
{
	if (this->re < c.re) return true;    // re plus petit  -> plus petit
	if (this->re > c.re) return false;   // re plus grand  -> pas plus petit
	return this->img <= c.img;// re égaux -> on départage par img

}

bool complexe::operator>(const complexe& c) const
{
	if (this->re > c.re) return true;    // re plus petit  -> plus petit
	if (this->re < c.re) return false;   // re plus grand  -> pas plus petit
	return this->img > c.img;// re égaux -> on départage par img

}

bool complexe::operator>=(const complexe& c) const
{
	if (this->re > c.re) return true;    // re plus petit  -> plus petit
	if (this->re < c.re) return false;   // re plus grand  -> pas plus petit
	return this->img <= c.img;// re égaux -> on départage par img

}

bool complexe::operator==(const complexe& c) const
{
	if (this->re == c.re && this->img == c.img)return true;
	return false;
}

bool complexe::operator!=(const complexe& c) const{
	if (this->re != c.re || this->img != c.img)return true;
	return false;
}

void complexe::afficher() const{
	cout << this->re << "+i" << this->img<<endl;
}

complexe::~complexe()
{
}
