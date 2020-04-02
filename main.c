#include <iostream>

void refrence_to_var (void) {
	int var = 15;
	int &ref = var; 
	// regarding to compiled code, the impletation is equal to 
	int *const ptr = &var;

	std::cout << "val addr:" << &var << "\t\tvalue: " << var << std::endl;
	std::cout << "ref addr:" << &ref << "\t\tvalue: " << ref << std::endl;
	std::cout << "ptr addr:" << ptr << "\t\tvalue: " << *ptr << std::endl;

	ref = 10;
	std::cout << "\nafter changing value" << std::endl;
	std::cout << "val addr:" << &var << "\t\tvalue: " << var << std::endl;
	std::cout << "ref addr:" << &ref << "\t\tvalue: " << ref << std::endl;
	std::cout << "ptr addr:" << ptr << "\t\tvalue: " << *ptr << std::endl;
}

void refrence_to_value(void) {
	// int &ref = 11; // error: cannot bind non-const 'int&' lvale to an 'int' lvalue
	int const &ref = 11; // this works fine
	//  it'll make an temporary object and uses its address

	// int const *const ptr = 11; // error
	std::cout << "ref addr:" << &ref << "\t\tvalue: " << ref << std::endl;
}

int main (void) {
	std::cout << "\n********* Refrence to Variable **********" << std::endl;
	refrence_to_var();
	
	std::cout << "\n*********  Refrence to Value   **********" << std::endl;
	refrence_to_value();
}
