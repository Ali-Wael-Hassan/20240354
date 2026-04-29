#pragma once

#include <model/Employee.h>
#include <view/EmployeeView.h>

class EmployeeController {
private:
    Employee e;
    EmployeeView ev;
public:
    EmployeeController(Employee _e, EmployeeView _ev);

    void setEmployeeId(const int& _id);
    void setEmployeeName(const std::string& _name);
    void setEmployeeEmail(const std::string& _email);

    int getEmployeeId() const;
    std::string getEmployeeName() const;
    std::string getEmployeeEmail() const;

    void view();
};