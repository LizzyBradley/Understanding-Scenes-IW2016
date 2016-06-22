// This is the header file for the IO methods used in p5danalyze
// Moved for the sake of clarity

#ifndef IO_AUX
#define IO_AUX

#include "R3Graphics/R3Graphics.h"
#include <string>
#include <vector>
#include <map>

P5DProject *ReadProject(const char *project_name, bool print_verbose);
R3Scene *CreateScene(P5DProject *project);
std::vector<std::string> LoadProjectIds(std::string filename = "data/list-of-projects.txt");
std::map<std::string, std::string> LoadIdToCategoryMap(std::string csv_filename="data/object_names.csv");
int WriteGrid(R2Grid *grid, const char *filename, bool print_verbose);


#endif

