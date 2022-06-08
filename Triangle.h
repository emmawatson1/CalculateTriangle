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




