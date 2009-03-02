//----------------------------------------------------------------------//
// The MIT License 
// 
// Copyright (c) 2008 Abhinav Agarwal, Alfred Man Cheuk Ng
// Contact: abhiag@gmail.com
// 
// Permission is hereby granted, free of charge, to any person 
// obtaining a copy of this software and associated documentation 
// files (the "Software"), to deal in the Software without 
// restriction, including without limitation the rights to use,
// copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be
// included in all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
// OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
// HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
// WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
// OTHER DEALINGS IN THE SOFTWARE.
//----------------------------------------------------------------------//

#include "global_rs.h"

const unsigned int pp [mm+1] = { 1, 0, 1, 1, 1, 0, 0, 0, 1} ; /* specify irreducible polynomial coeffts */
const unsigned char pp_char = 29;
 
void generate_gf( int *alpha_to, int *index_of);
unsigned char gfmult_lut(unsigned char a, unsigned char b, int *alpha_to, int *index_of);
unsigned char gfmult_hw(unsigned char a, unsigned char b);
unsigned char gfadd_hw(unsigned char a, unsigned char b);
unsigned char gfinv_lut(unsigned char a);
unsigned char alpha (unsigned char n);
unsigned char alphainv_lut (unsigned char n);
unsigned char gfdiv_lut (unsigned char dividend, unsigned char divisor);
void polymult_mod2t (unsigned char *result, unsigned char *left, unsigned char *right);
void compute_deriv (unsigned char lambda[tt], unsigned char lambda_deriv[tt]);
unsigned char poly_eval (unsigned char poly[tt], unsigned char alpha_inv);



