// myCLR.h

#pragma once
#include "..\myCLib\MathFuncs.h"

using namespace System;

namespace myCLR {

	public ref class MathFuncsWrap
	{
		// TODO: ���⿡ �� Ŭ������ ���� �޼��带 �߰��մϴ�.
	protected:
		MathFuncs* m_pMathFuncs;
	
	public:
		MathFuncsWrap();
		virtual ~MathFuncsWrap();
		double Add(double _num1, double _num2);
	};
}
