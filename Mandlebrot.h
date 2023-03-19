#ifndef MANDLEBROT_H_
#define MANDLEBROT_H_

#include <string>
#include <cstdint>
#include <memory> // unique_ptr

using namespace std;

namespace rhjr{

class Mandlebrot
{
public:
	static const int MAX_ITERATIONS = 1000;


public:
	Mandlebrot();
	virtual ~Mandlebrot();
	
	static int getIterations(double x,double y);	
};


}

#endif