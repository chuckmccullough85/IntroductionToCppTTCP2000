#pragma once

#include "HumanResource.h"

namespace payroll {
	class Contractor : public HumanResource
	{
	public:
		using HumanResource::HumanResource;
		float pay() override
		{
			return getSalary() - 10.00f;
		}
	};
} // namespace payroll