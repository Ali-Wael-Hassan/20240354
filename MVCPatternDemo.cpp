#include <model/Employee.h>
#include <view/EmployeeView.h>
#include <controller/EmployeeController.h>

int main() {
    Employee model(101, "Ali Wael", "aliwael@example.com");

    EmployeeView view;

    EmployeeController controller(model, view);

    controller.view();

    controller.setEmployeeName("Ali Hassan");
    controller.setEmployeeEmail("a.hassan@example.com");

    std::cout << "\n--- After Update ---\n";
    controller.view();

    return 0;
}