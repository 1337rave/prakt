#include <iostream>
#include <fstream>

class Point {
private:
    double x;
    double y;
    double z;

public:
    // Constructors
    Point() : x(0.0), y(0.0), z(0.0) {}
    Point(double xCoord, double yCoord, double zCoord) : x(xCoord), y(yCoord), z(zCoord) {}

    // Member functions for data input
    void inputPointData() {
        std::cout << "Enter x-coordinate: ";
        std::cin >> x;

        std::cout << "Enter y-coordinate: ";
        std::cin >> y;

        std::cout << "Enter z-coordinate: ";
        std::cin >> z;
    }

    // Member function for data display
    void displayPointData() const {
        std::cout << "Point coordinates: (" << x << ", " << y << ", " << z << ")\n";
    }

    // Accessors for member variables
    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    double getZ() const {
        return z;
    }

    // Save data to a file
    void saveToFile(const std::string& filename) const {
        std::ofstream outFile(filename);
        if (outFile.is_open()) {
            outFile << x << " " << y << " " << z << std::endl;
            outFile.close();
            std::cout << "Data saved to file: " << filename << std::endl;
        }
        else {
            std::cerr << "Unable to open file for writing." << std::endl;
        }
    }

    // Load data from a file
    void loadFromFile(const std::string& filename) {
        std::ifstream inFile(filename);
        if (inFile.is_open()) {
            inFile >> x >> y >> z;
            inFile.close();
            std::cout << "Data loaded from file: " << filename << std::endl;
        }
        else {
            std::cerr << "Unable to open file for reading." << std::endl;
        }
    }
};

int main() {
    Point point;

    // Input point data
    point.inputPointData();

    // Display point data
    std::cout << "\nPoint Information:\n";
    point.displayPointData();

    // Save data to a file
    point.saveToFile("point_data.txt");

    // Load data from a file
    Point loadedPoint;
    loadedPoint.loadFromFile("point_data.txt");

    // Display loaded point data
    std::cout << "\nLoaded Point Information:\n";
    loadedPoint.displayPointData();

    return 0;
}
