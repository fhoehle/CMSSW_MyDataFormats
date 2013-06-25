#include "DataFormats/Common/interface/Wrapper.h"
#include <vector>
#include <utility>
#include <string>

namespace {
  struct dictionary {
    std::vector<std::pair<std::basic_string<char>,std::vector<float> > > vpsvf1;
    edm::Wrapper<std::vector<std::pair<std::basic_string<char>,std::vector<float> > > > wvpsvf1;
  };
}
