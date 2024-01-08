#pragma once
#include <string>
#include <stdexcept>
#include <regex>

namespace payroll
{
	using namespace std;
	class HumanResource
	{
		public:
		HumanResource(string name, float salary)
		{
			// validate name for legal characters using a regular expression
			regex namePattern("^[A-Za-z .']+$");
			if (!regex_match(name, namePattern))
				throw invalid_argument("Name contains illegal characters");
			setSalary(salary);
		}
		~HumanResource() {}
		string getName() { return name; }
		float getSalary() {return salary; }
		void setSalary(float salary) 
		{
			if (salary < 50)
				throw invalid_argument("Salary cannot be less than 50");
			this->salary = salary; 
		}

		virtual float pay() { return 0; }

	private:
		string name;
		float salary;
	};
} // namespace payroll