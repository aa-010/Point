#ifndef POINT_H
#define POINT_H
#include<iostream>

using namespace std;

class CPoint
{
private:
	double m_dX;
	double m_dY;
public:
	CPoint(double x = 0.0, double y = 0.0);

	double GetX();
	double GetY();

	void SetX(double x = 0.0);
	void SetY(double y = 0.0);

	friend ostream& operator<<(ostream& os, const CPoint point);

	CPoint operator+(const CPoint& other);
	CPoint operator-(const CPoint& other);

	bool operator==(const CPoint& other);
	bool operator!=(const CPoint& other);

	CPoint& operator++();
	CPoint& operator++(int value);;
#endif