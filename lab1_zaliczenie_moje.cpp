#include <iostream>
using namespace std;

class Wektor2D
{   
private:
    double x;
    double y;
public:
    Wektor2D(double X = 0.0, double Y = 0.0) : x{X}, y{Y}   // w () konstruktor ma zawarte domyślne wartości i nie trzeba ich pisać
    {
        std::cout << x << y << "\n";
    }

    void setX(int X) { x = X; }
    void setY(int Y) { y = Y; }

    double getX() const {return x;}
    double getY() const {return y;}

    Wektor2D operator+(const Wektor2D& other) const  
        {
            return Wektor2D{x+other.x, y+other.y};
        }

    double operator*(const Wektor2D& other) const
        {
            return x*other.x + y*other.y;
        }
};



//do wyjebania:
int main()
{   
Wektor2D v1{};           // Konstruktor domyślny, wektor o wsp. [0, 0]
v1.setX(1.);             // setter
v1.setY(1.);             // setter      ustawia na 1, 1
double x1 = v1.getX();   // getter
double y1 = v1.getY();   // getter
std::cout << x1 << y1 << " powinno 1 1\n";

Wektor2D v2{2., 2.}; // Konstruktor nadający współrzędne

Wektor2D sum = v1 + v2; // dodawanie wektorów

double prod = v1 * v2; // iloczyn skalarny




std::cout << prod << "\n";

}
