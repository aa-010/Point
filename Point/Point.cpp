#include "Point.h"

using namespace std;

CPoint::CPoint(double x, double y)
{
	m_dX = x;
	m_dY = y;
}
double CPoint::GetX() { return m_dX; }
double CPoint::GetY() { return m_dY; }

void CPoint::SetX(double x) { m_dX = x; }
void CPoint::SetY(double y) { m_dY = y; }

ostream& operator<<(ostream& os, const CPoint point)
{
	os << "Point: " << point.m_dX << ";" << point.m_dY << endl;

	return os;
}

CPoint CPoint::operator+(const CPoint& other)
{
	CPoint temp;

	temp.m_dX = this->m_dX + other.m_dX;
	temp.m_dY = this->m_dY + other.m_dY;

	return temp;
}

CPoint CPoint::operator-(const CPoint& other)
{
	CPoint temp;

	temp.m_dX = this->m_dX - other.m_dX;
	temp.m_dY = this->m_dY - other.m_dY;

	return temp;
}

bool CPoint::operator==(const CPoint& other)
{
	return this->m_dX == other.m_dX && this->m_dY == other.m_dY;
}

bool CPoint::operator!=(const CPoint& other)
{
	return !(this->m_dX == other.m_dX && this->m_dY == other.m_dY);
}

CPoint& CPoint::operator++()
{
	this->m_dX += 1;
	this->m_dY += 1;

	return *this;
}

CPoint& CPoint::operator++(int value)
{
	CPoint temp(*this);
	this->m_dX += 1;
	this->m_dY += 1;

	return temp;
}
