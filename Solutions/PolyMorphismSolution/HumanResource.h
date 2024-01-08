#pragma once
#include <string>

namespace payroll
{
	using namespace std;
	class HumanResource
	{
		public:
		HumanResource(string name, float salary) : name(name), salary(salary) {}
		~HumanResource() {}
		string getName() { return name; }
		float getSalary() {return salary; }
		void setSalary(float salary) { this->salary = salary; }

		virtual float pay() { return 0; }

	private:
		string name;
		float salary;
	};
} // namespace payroll