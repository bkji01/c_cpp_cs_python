#pragma once
class MathFuncs
{
private :
	explicit MathFuncs(const MathFuncs& rAdd);
	MathFuncs &operator=(const MathFuncs&);

public:
	explicit MathFuncs();
	virtual ~MathFuncs();

	double Add(double _num1, double _num2);
};
