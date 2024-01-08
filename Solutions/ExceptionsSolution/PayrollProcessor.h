#pragma once

#include <initializer_list>
#include "HumanResource.h"

namespace payroll
{
	using namespace std;
	float CalculatePayroll(initializer_list<HumanResource*> emps)
	{
		float totalPayroll = 0.0f;
		for (auto& emp : emps)
		{
			totalPayroll += emp->pay();
		}
		return totalPayroll;
	}
}