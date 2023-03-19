#ifndef RGB_H
#define RGB_H

namespace rhjr{
struct RGB
{
public:
    double r;
    double g;
    double b;
    RGB(double r,double g,double b);
};

RGB operator-(const RGB& first,const RGB& second);

}
#endif // RGB_H
