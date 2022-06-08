#pragma once
#include <utility>

class Triangle
{
private:
    std::pair<float, float> point1{};
    std::pair<float, float> point2{};
    std::pair<float, float> point3{};

    float area{};
    float side_a{};
    float side_b{};
    float side_c{};

    float calc_diagonal_length(const std::pair<float, float> point1, const std::pair<float, float> point2) const;
    void calculate_sides();
    void calculate_area();

public:
    Triangle(std::pair<float, float> x, std::pair<float, float> y, std::pair<float, float> z);
    void print_points() const;
    float get_area() const;
    ~Triangle();
};

//std::shared_ptr<Triangle> getTriangle() {
//
//    std::vector<std::pair<float, float>> coordinates{ 3 };
//    std::vector<std::string> position{ "A","B","C" };
//    std::string coords;
//    float temp1;
//    float temp2;
//
//    bool confirmed = false;
//    while (!confirmed) {
//        auto pos_it = begin(position);
//        for (auto& var : coordinates)
//        {
//            std::cout << "Please enter co-ordinates for triangle point " << *pos_it << " in the format x, y \: ";
//            pos_it++;
//            std::cin >> coords;
//            std::replace(begin(coords), end(coords), ',', ' ');
//
//            std::stringstream(coords) >> temp1 >> temp2;
//            coords = "";
//            var.first = temp1;
//            var.second = temp2;
//        }
//
//        if ((coordinates.at(0).first == coordinates.at(1).first && coordinates.at(1).first == coordinates.at(2).first) || (coordinates.at(0).second == coordinates.at(1).second && coordinates.at(1).second == coordinates.at(2).second)) {
//            std::cout << std::endl;
//            std::cout << "This is not a triangle. ";
//        }
//        else {
//            confirmed = true;
//            return std::make_shared<Triangle>(coordinates.at(0), coordinates.at(1), coordinates.at(2));
//        }
//    }
//}



