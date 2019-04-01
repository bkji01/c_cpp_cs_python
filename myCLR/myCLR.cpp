// 기본 DLL 파일입니다.

#include "stdafx.h"

#include "myCLR.h"

namespace myCLR
{
	MathFuncsWrap::MathFuncsWrap() : m_pMathFuncs(new MathFuncs)
	{

	}

	MathFuncsWrap::~MathFuncsWrap()
	{
		if(m_pMathFuncs)
		{
			delete m_pMathFuncs;
			m_pMathFuncs = 0;
		}
	}

	double MathFuncsWrap::Add(double _num1, double _num2)
	{
		return (m_pMathFuncs->Add(_num1, _num2));
	}
}
