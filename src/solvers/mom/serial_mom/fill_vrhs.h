#ifndef FILL_VRHS_H
#define FILL_VRHS_H

#include <vector>
#include <complex>
#include <map>
#include <string>
#include <iostream>
#include <cmath>
#include <algorithm>

#include "../mom_helpers/vrhs.h"
#include "../../../data_structures/triangle.h"
#include "../../../data_structures/edge.h"
#include "../../../data_structures/label.h"
#include "../../../helpers/globals.h"


void serialFillVrhs(std::map<std::string, std::string> &const_map,
                    std::vector<Triangle> &triangles, 
                    std::vector<Edge> &edges,
                    std::vector<Excitation> &excitations,
                    std::complex<double> *vrhs,
                    int domain_index,
                    Label label,
                    bool cbfm);

#endif // FILL_VRHS_H

