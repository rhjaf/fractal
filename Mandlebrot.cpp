
#include <complex.h>
#include "Mandlebrot.h"

using namespace std;

using namespace rhjr;

Mandlebrot::Mandlebrot(){}

Mandlebrot::~Mandlebrot(){}


int Mandlebrot::getIterations(double x,double y){

	complex<double> z=0;
	complex<double> c(x,y);

	int iterations =0;

	while(iterations<MAX_ITERATIONS){
        z = z * z + c;

        if(abs(z)>2) {

            break;
        }

        iterations++;
	}
    return iterations;
}


