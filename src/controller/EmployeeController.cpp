#include <controller/EmployeeController.h>

EmployeeController::EmployeeController(Employee _e, EmployeeView _ev)
    : e(_e), ev(_ev) {}

void EmployeeController::setEmployeeId(const int& _id) { this->e.setId(_id); }
void EmployeeController::setEmployeeName(const std::string& _name) { this->e.setName(_name); }
void EmployeeController::setEmployeeEmail(const std::string& _email) { this->e.setEmail(_email); }

int EmployeeController::getEmployeeId() const { return this->e.getId(); }
std::string EmployeeController::getEmployeeName() const { return this->e.getName(); }
std::string EmployeeController::getEmployeeEmail() const { return this->e.getEmail(); }

void EmployeeController::view() { this->ev.printEmployee(e); }