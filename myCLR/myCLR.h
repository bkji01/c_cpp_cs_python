// myCLR.h

#pragma once
#include "..\myCLib\MathFuncs.h"

using namespace System;

namespace myCLR {

	public ref class MathFuncsWrap
	{
		// TODO: 여기에 이 클래스에 대한 메서드를 추가합니다.
	protected:
		MathFuncs* m_pMathFuncs;
	
	public:
		MathFuncsWrap();
		virtual ~MathFuncsWrap();
		double Add(double _num1, double _num2);
	};
}
