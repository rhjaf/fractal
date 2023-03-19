#ifndef BITMAPINFOHEADER_H_
#define BITMAPINFOHEADER_H_
#include <cstdint>

using namespace std;

#pragma pack(2)

namespace rhjr{

struct BitmapInfoHeader
{
	int32_t headersize{40};
	int32_t width;
	int32_t height;
	int16_t planes{1};
	int16_t bitsPerPixel{24}; // 3x8 : RGB
	int32_t compression{0}; // do not use
	int32_t dataSize{0}; // size of data that we are going to write
	int32_t horizontalResolution{2400}; // bpp
	int32_t verticalResolution{2400};
	int32_t colors{0}; // NULL
	int32_t importantColors{0};

};
}

#endif