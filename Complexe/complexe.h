#include<iostream>
#pragma once
class complexe{
private:
	double re;
	double img;

public:
	complexe(double, double);
	complexe(const complexe& c);

	complexe operator+(complexe) const;
	complexe operator+(double) const;

	complexe operator-(double) const;
	complexe operator-(complexe) const;

	complexe operator*(complexe) const;
	complexe operator*(double) const;

	complexe operator/(complexe) const;
	complexe operator/(double) const;

	bool operator<(const complexe& ) const;
	bool operator<=(const complexe&) const;

	bool operator>(const complexe&) const;
	bool operator>=(const complexe&) const;

	bool operator==(const complexe&) const;
	bool operator!=(const complexe&) const;

	void afficher() const;
	~complexe();
};

