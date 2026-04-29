#include <model/Employee.h>

Employee::Employee(const int& _id, const std::string& _name, const std::string& _email)
    : id(_id), name(_name), email(_email) {}

void Employee::setId(const int& _id) { this->id = _id; }
void Employee::setName(const std::string& _name) { this->name = _name; }
void Employee::setEmail(const std::string& _email) { this->email = _email; }

int Employee::getId() const { return this->id; }
std::string Employee::getName() const { return this->name; }
std::string Employee::getEmail() const { return this->email; }