#ifndef FRACTALCREATOR_H
#define FRACTALCREATOR_H

#include <iostream>
#include <cstdint>
#include <memory.h>
#include <math.h>
#include <string>
#include <assert.h>
#include "Zoom.h"
#include "Mandlebrot.h"
#include "Bitmap.h"
#include "ZoomList.h"
#include "RGB.h"
#include <vector>

using namespace std;

namespace rhjr{

class FractalCreator
{
private:
    int m_width;
    int m_height;
    unique_ptr<int []> m_histogram;
    unique_ptr<int []> m_fractal;
    Bitmap m_bitmap;
    ZoomList m_zoomList;
    int m_total{0};
    void calculateIteration();
    void calculateTotalIterations();
    void drawFractal();

    void writeBitmap(string name);
    vector<int> m_ranges;
    vector<RGB> m_colors;
    vector<int> m_rangeTotals;
    bool m_bGotFirstRange{false};
public:
    void run(string name);
    FractalCreator(int width,int height);
    virtual ~FractalCreator();
    void addZoom(const Zoom& zoom);
    void addRange(double rangeEnd,const RGB &rgb);
    void calculateRangeTotals();
    int getRange(int iterations) const;
};
}
#endif // FRACTALCREATOR_H
