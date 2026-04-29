#include <view/EmployeeView.h>

void EmployeeView::printEmployee(const Employee& employee) {
    std::cout << "================================================" << std::endl;
    std::cout << "ID: " << employee.getId() << std::endl
            << "Name: " << employee.getName() << std::endl
            << "Email: " << employee.getEmail() << std::endl;
    std::cout << "================================================" << std::endl;
}