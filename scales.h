//
// scales.h
// ========
//
// This file is a list of all currently-recognized scales' vendor and product
// IDs.
//
// For example, the USB product 1446:6173 becomes {0x1446, 0x6173}
//
#include <stdint.h>

//
// **NSCALES** should be kept updated with the length of the list.
//
#define NSCALES 3

//
// Scales
// ------
//
uint16_t scales[NSCALES][2] = {\
    // Stamps.com Model 510 5LB Scale
    {0x1446, 0x6a73},
    // USPS (Elane) PS311 "XM Elane Elane UParcel 30lb"
    {0x7b7c, 0x0100},
    // Stamps.com Stainless Steel 5 lb. Digital Scale
    {0x2474, 0x0550}
};
