//
//   Copyright 2019 DreamWorks Animation LLC.
//
//   Licensed under the Apache License, Version 2.0 (the "Apache License")
//   with the following modification; you may not use this file except in
//   compliance with the Apache License and the following modification to it:
//   Section 6. Trademarks. is deleted and replaced with:
//
//   6. Trademarks. This License does not grant permission to use the trade
//      names, trademarks, service marks, or product names of the Licensor
//      and its affiliates, except as required to comply with Section 4(c) of
//      the License and to reproduce the content of the NOTICE file.
//
//   You may obtain a copy of the Apache License at
//
//       http://www.apache.org/licenses/LICENSE-2.0
//
//   Unless required by applicable law or agreed to in writing, software
//   distributed under the Apache License with the above modification is
//   distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
//   KIND, either express or implied. See the Apache License for the specific
//   language governing permissions and limitations under the Apache License.
//

static const std::string loop_toroidal_tet =
"#\n"
"#  Toroidal tetrahedron oriented within an axially aligned cube:\n"
"#\n"
"v -1.0  1.0 -1.0\n"
"v -1.0 -1.0  1.0\n"
"v  1.0 -1.0 -1.0\n"
"v  1.0  1.0  1.0\n"
"v  0.2 -0.6 -0.6\n"
"v -0.6  0.2 -0.6\n"
"v -0.6 -0.6  0.2\n"
"v -0.6  0.6 -0.2\n"
"v -0.6 -0.2  0.6\n"
"v  0.2  0.6  0.6\n"
"v -0.2 -0.6  0.6\n"
"v  0.6 -0.6 -0.2\n"
"v  0.6  0.2  0.6\n"
"v  0.6 -0.2 -0.6\n"
"v -0.2  0.6 -0.6\n"
"v  0.6  0.6  0.2\n"
"v -0.4  0.4 -0.4\n"
"v -0.4 -0.4  0.4\n"
"v  0.4 -0.4 -0.4\n"
"v  0.4  0.4  0.4\n"
"v  0.0  0.0 -1.0\n"
"v  0.0 -1.0  0.0\n"
"v -1.0  0.0  0.0\n"
"v  0.0  0.0  1.0\n"
"v  0.0  1.0  0.0\n"
"v  1.0  0.0  0.0\n"
"v  0.0  0.0 -0.4\n"
"v  0.0 -0.4  0.0\n"
"v -0.4  0.0  0.0\n"
"v  0.0  0.0  0.4\n"
"v  0.0  0.4  0.0\n"
"v  0.4  0.0  0.0\n"
"\n"
"vt 0.250 0.410\n"
"vt 0.138 0.215\n"
"vt 0.250 0.254\n"
"vt 0.160 0.100\n"
"vt 0.025 0.020\n"
"vt 0.250 0.020\n"
"vt 0.340 0.100\n"
"vt 0.475 0.020\n"
"vt 0.363 0.215\n"
"vt 0.750 0.410\n"
"vt 0.637 0.215\n"
"vt 0.750 0.254\n"
"vt 0.660 0.100\n"
"vt 0.525 0.020\n"
"vt 0.750 0.020\n"
"vt 0.840 0.100\n"
"vt 0.975 0.020\n"
"vt 0.863 0.215\n"
"vt 0.250 0.910\n"
"vt 0.138 0.715\n"
"vt 0.250 0.754\n"
"vt 0.160 0.600\n"
"vt 0.025 0.520\n"
"vt 0.250 0.520\n"
"vt 0.340 0.600\n"
"vt 0.475 0.520\n"
"vt 0.363 0.715\n"
"vt 0.750 0.910\n"
"vt 0.637 0.715\n"
"vt 0.750 0.754\n"
"vt 0.660 0.600\n"
"vt 0.525 0.520\n"
"vt 0.750 0.520\n"
"vt 0.840 0.600\n"
"vt 0.975 0.520\n"
"vt 0.863 0.715\n"
"vt 0.239 0.156\n"
"vt 0.228 0.137\n"
"vt 0.250 0.175\n"
"vt 0.250 0.137\n"
"vt 0.273 0.137\n"
"vt 0.262 0.156\n"
"vt 0.739 0.156\n"
"vt 0.728 0.137\n"
"vt 0.750 0.175\n"
"vt 0.750 0.137\n"
"vt 0.772 0.137\n"
"vt 0.761 0.156\n"
"vt 0.239 0.656\n"
"vt 0.228 0.637\n"
"vt 0.250 0.675\n"
"vt 0.250 0.637\n"
"vt 0.273 0.637\n"
"vt 0.262 0.656\n"
"vt 0.750 0.637\n"
"vt 0.772 0.637\n"
"vt 0.728 0.637\n"
"vt 0.761 0.656\n"
"vt 0.750 0.675\n"
"vt 0.739 0.656\n"
"\n"
"f  1/1  21/2   6/3 \n"
"f 21/2   5/4   6/3 \n"
"f 21/2   3/5   5/4 \n"
"f  3/5  22/6   5/4 \n"
"f 22/6   7/7   5/4 \n"
"f 22/6   2/8   7/7 \n"
"f  2/8  23/9   7/7 \n"
"f 23/9   6/3   7/7 \n"
"f 23/9   1/1   6/3 \n"
"f  2/10 24/11  9/12\n"
"f 24/11 10/13  9/12\n"
"f 24/11  4/14 10/13\n"
"f  4/14 25/15 10/13\n"
"f 25/15  8/16 10/13\n"
"f 25/15  1/17  8/16\n"
"f  1/17 23/18  8/16\n"
"f 23/18  9/12  8/16\n"
"f 23/18  2/10  9/12\n"
"f  3/19 26/20 12/21\n"
"f 26/20 13/22 12/21\n"
"f 26/20  4/23 13/22\n"
"f  4/23 24/24 13/22\n"
"f 24/24 11/25 13/22\n"
"f 24/24  2/26 11/25\n"
"f  2/26 22/27 11/25\n"
"f 22/27 12/21 11/25\n"
"f 22/27  3/19 12/21\n"
"f  4/28 26/29 16/30\n"
"f 26/29 14/31 16/30\n"
"f 26/29  3/32 14/31\n"
"f  3/32 21/33 14/31\n"
"f 21/33 15/34 14/31\n"
"f 21/33  1/35 15/34\n"
"f  1/35 25/36 15/34\n"
"f 25/36 16/30 15/34\n"
"f 25/36  4/28 16/30\n"
"f  6/3   5/4  27/37\n"
"f  5/4  19/38 27/37\n"
"f  6/3  27/37 17/39\n"
"f  5/4   7/7  28/40\n"
"f  7/7  18/41 28/40\n"
"f  5/4  28/40 19/38\n"
"f  7/7   6/3  29/42\n"
"f  6/3  17/39 29/42\n"
"f  7/7  29/42 18/41\n"
"f  9/12 10/13 30/43\n"
"f 10/13 20/44 30/43\n"
"f  9/12 30/43 18/45\n"
"f 10/13  8/16 31/46\n"
"f  8/16 17/47 31/46\n"
"f 10/13 31/46 20/44\n"
"f  8/16  9/12 29/48\n"
"f  9/12 18/45 29/48\n"
"f  8/16 29/48 17/47\n"
"f 12/21 13/22 32/49\n"
"f 13/22 20/50 32/49\n"
"f 12/21 32/49 19/51\n"
"f 13/22 11/25 30/52\n"
"f 11/25 18/53 30/52\n"
"f 13/22 30/52 20/50\n"
"f 11/25 12/21 28/54\n"
"f 12/21 19/51 28/54\n"
"f 11/25 28/54 18/53\n"
"f 14/31 15/34 27/55\n"
"f 15/34 17/56 27/55\n"
"f 14/31 27/55 19/57\n"
"f 15/34 16/30 31/58\n"
"f 16/30 20/59 31/58\n"
"f 15/34 31/58 17/56\n"
"f 16/30 14/31 32/60\n"
"f 14/31 19/57 32/60\n"
"f 16/30 32/60 20/59\n"
"\n"
;
