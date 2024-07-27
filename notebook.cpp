/* Program name: notebook.h
 * Author: Adolphe Dimandja
 * Date last updated: 7/27/2024
 * Purpose: Define the Notebook class with properties and methods to describe a notebook.
 */

#ifndef NOTEBOOK_H
#define NOTEBOOK_H

#include <string>
#include <sstream>
#include <iomanip>

class Notebook {
private:
    double width;
    double height;
    int numberOfPages;
    std::string paperType;
    std::string format;
    std::string paperColor;
    std::string coverType;
    std::string coverDesign;

public:
    // Constructor
    Notebook(double w, double h, int pages, std::string pType, std::string f, std::string pColor, std::string cType, std::string cDesign)
        : width(w), height(h), numberOfPages(pages), paperType(pType), format(f), paperColor(pColor), coverType(cType), coverDesign(cDesign) {}

    // toString function to display the notebook details
    std::string toString() const {
        std::ostringstream oss;
        oss << "Dimensions: " << std::fixed << std::setprecision(6) << width << "x" << height << "\n"
            << "Number of pages: " << numberOfPages << "\n"
            << "Paper Type: " << paperType << "\n"
            << "Paper Color: " << paperColor << "\n"
            << "Page Format: " << format << "\n"
            << "Cover Type: " << coverType << "\n"
            << "Cover Design: " << coverDesign;
        return oss.str();
    }
};

#endif // NOTEBOOK_H
