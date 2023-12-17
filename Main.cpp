#include <iostream>
#include <string>

class Student {
private:
    std::string fullName;
    std::string birthDate;
    std::string contactPhone;
    std::string city;
    std::string country;
    std::string schoolName;
    std::string schoolCity;
    std::string schoolCountry;
    std::string groupNumber;

public:
    // Member functions for data input
    void inputStudentData() {
        std::cout << "Enter Full Name: ";
        std::getline(std::cin, fullName);

        std::cout << "Enter Birth Date: ";
        std::getline(std::cin, birthDate);

        std::cout << "Enter Contact Phone: ";
        std::getline(std::cin, contactPhone);

        std::cout << "Enter City: ";
        std::getline(std::cin, city);

        std::cout << "Enter Country: ";
        std::getline(std::cin, country);

        std::cout << "Enter School Name: ";
        std::getline(std::cin, schoolName);

        std::cout << "Enter School City: ";
        std::getline(std::cin, schoolCity);

        std::cout << "Enter School Country: ";
        std::getline(std::cin, schoolCountry);

        std::cout << "Enter Group Number: ";
        std::getline(std::cin, groupNumber);
    }

    // Member function for data display
    void displayStudentData() const {
        std::cout << "Full Name: " << fullName << std::endl;
        std::cout << "Birth Date: " << birthDate << std::endl;
        std::cout << "Contact Phone: " << contactPhone << std::endl;
        std::cout << "City: " << city << std::endl;
        std::cout << "Country: " << country << std::endl;
        std::cout << "School Name: " << schoolName << std::endl;
        std::cout << "School City: " << schoolCity << std::endl;
        std::cout << "School Country: " << schoolCountry << std::endl;
        std::cout << "Group Number: " << groupNumber << std::endl;
    }

    // Accessors for individual member variables
    const std::string& getFullName() const {
        return fullName;
    }

    const std::string& getBirthDate() const {
        return birthDate;
    }

    const std::string& getContactPhone() const {
        return contactPhone;
    }

    const std::string& getCity() const {
        return city;
    }

    const std::string& getCountry() const {
        return country;
    }

    const std::string& getSchoolName() const {
        return schoolName;
    }

    const std::string& getSchoolCity() const {
        return schoolCity;
    }

    const std::string& getSchoolCountry() const {
        return schoolCountry;
    }

    const std::string& getGroupNumber() const {
        return groupNumber;
    }
};

int main() {
    Student student;

    // Input student data
    student.inputStudentData();

    // Display student data
    std::cout << "\nStudent Information:\n";
    student.displayStudentData();

    return 0;
}
