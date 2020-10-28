#ifndef __ConvolutionTestDLL_H__
#define __ConvolutionTestDLL_H__

#include <iostream>
using namespace std;

#ifdef __cplusplus
extern "C" {
#endif

    //==============================================================================
    // Include files

    #include "nivision.h"
    #include "cvidef.h"

    __declspec(dllexport) uint8_t cv_thresh(unsigned char* img_in, unsigned char* img_out, int height, int width, int thresh_val);

#ifdef __cplusplus
}
#endif

#endif  /* ndef __ConvolutionTestDLL_H__ */
