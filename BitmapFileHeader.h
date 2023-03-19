#ifndef BITMAPFILEHEADER_H_
#define BITMAPFILEHEADER_H_

#include <cstdint> // c stdandard

using namespace std;

// remove padding that is added for most efficiency

#pragma pack(2) // align all of them in 2 bytes

namespace rhjr{
struct BitmapFileHeader{
	char header[2]{'B','M'}; // C++11
	int32_t fileSize; // 32-bit integers
	int32_t reserved{0};
	int32_t dataOffset;
};

}

#endif /* BITMAPFILEHEADER_H */

