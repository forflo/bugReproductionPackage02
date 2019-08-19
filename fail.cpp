#include "rose.h"

#include <iostream>
#include <sstream>

int main(int argc, char **argv) {
  SgProject *project = frontend(argc, argv);

  std::cout << "content of project->get_includeDirectorySpecifierList()"
            << std::endl;
  project->initialization();
  auto il = project->get_includeDirectorySpecifierList();
  std::for_each(std::begin(il), std::end(il),
                [](auto &i) { std::cout << i << std::endl; });

  std::cout << "content of project->get_includePathList()" << std::endl;
  auto ip = project->get_includePathList();
  std::for_each(std::begin(ip), std::end(ip),
                [](auto &i) { std::cout << i << std::endl; });

  std::cout << "content of project->get_includeFileList()" << std::endl;
  auto if_ = project->get_includeFileList();
  std::for_each(std::begin(if_), std::end(if_),
                [](auto &i) { std::cout << i << std::endl; });

  return 0;
}
