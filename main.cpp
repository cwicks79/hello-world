# include <iostream>

int main() {
    //get user's name
    std::cout << "Please enter your name: ";
    std::string name;
    std::getline(std::cin, name);
    
    //display a greeting
    std::cout << "Hello " << name << "!" << std::endl;

    return 0;
}
