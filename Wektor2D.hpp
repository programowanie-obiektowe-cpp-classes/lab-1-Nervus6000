class Wektor2D
{   
private:
    double x;
    double y;
public:
    Wektor2D(double X = 0.0, double Y = 0.0) : x{X}, y{Y}   
    {}

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