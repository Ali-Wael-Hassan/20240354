#pragma once

#include <string>

class Employee {
private:
    int id;
    std::string name;
    std::string email;
public:
    Employee(const int& _id, const std::string& _name, const std::string& _email);
    
    void setId(const int& _id);
    void setName(const std::string& _name);
    void setEmail(const std::string& _email);

    int getId() const;
    std::string getName() const;
    std::string getEmail() const;
};