#pragma once

#include "HumanResource.h"
namespace payroll {
	class Employee : public HumanResource
	{
	public:
		using HumanResource::HumanResource;
		float pay() override
		{
			return getSalary() - getSalary() * .10f;
		}
	};
} // namespace payroll