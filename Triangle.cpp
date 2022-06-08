#include "Triangle.h"
#include <utility>
#include <iostream>
#include <cmath>


    Triangle::Triangle(std::pair<float, float> x, std::pair<float, float> y, std::pair<float, float> z) :
        point1{ x }, point2{ y }, point3{ z } {
        calculate_sides();
        calculate_area();
    };

    void Triangle::print_points() const {
        std::cout << " (" << point1.first << ", " << point1.second << ") "
            << " (" << point2.first << ", " << point2.second << ") "
            << " (" << point3.first << ", " << point3.second << ") ";
    }

    void Triangle::calculate_sides() {
        //side A
        side_a = (point1.first == point2.first) ? fabs((point1.second) - (point2.second)) : 
            (point1.second == point2.second) ? fabs((point1.first) - (point2.first)) :
            calc_diagonal_length(point1, point2);

        //side B
        side_b = (point2.first == point3.first) ? fabs((point2.second) - (point3.second)) :
            (point2.second == point3.second) ? fabs((point2.first) - (point3.first)) :
            calc_diagonal_length(point2, point3);

        //side C
        side_c = (point3.first == point1.first) ? fabs((point3.second) - (point1.second)) :
            (point3.second == point1.second) ? fabs((point3.first) - (point1.first)) :
            calc_diagonal_length(point2, point3);
    }

    void Triangle::calculate_area() {
        float semi_perimiter = (side_a, side_b, side_c) / 2;
        area = sqrt(semi_perimiter * (semi_perimiter - side_a) * (semi_perimiter - side_b) * (semi_perimiter * side_c));
    }

    float Triangle::get_area() const{
        return area;
    }

    float Triangle::calc_diagonal_length(const std::pair<float, float> start_point, const std::pair<float, float> end_point) const {
        float side1 = start_point.first - end_point.first;
        float side2 = start_point.second - end_point.second;
        float length = std::sqrt(std::pow(side1, 2.0) + std::pow(side2, 2.0));
        return length;
    }

    Triangle::~Triangle() {};

