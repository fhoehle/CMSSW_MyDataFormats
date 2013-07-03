#include "DataFormats/HepMCCandidate/interface/GenParticle.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include <vector>

namespace {
  struct dictionary {
	std::vector<std::vector<reco::GenParticle> > vvgp1;
    edm::Wrapper<std::vector<std::vector<reco::GenParticle> > > wvvgp1;
  };
}

