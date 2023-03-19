
#include "FractalCreator.h"
#include "RGB.h"
#include "Zoom.h"

#include <iostream>


using namespace std;
using namespace rhjr;

int main(int argc, char const *argv[])
{	


    FractalCreator fractalCreator(800,600);
    fractalCreator.addRange(0.0,RGB(0,0,0));
    fractalCreator.addRange(0.3,RGB(255,0,0));
    fractalCreator.addRange(0.5,RGB(255,255,0));
    fractalCreator.addRange(1.0,RGB(255,255,255));
    cout<< fractalCreator.getRange(999) <<endl;
    fractalCreator.addZoom(Zoom(295,202,0.1));
    fractalCreator.addZoom(Zoom(312,304,0.1));

    fractalCreator.run("output.bmp");





	return 0;
}
