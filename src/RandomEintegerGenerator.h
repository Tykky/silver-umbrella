#ifndef RANDOMEINTEGERGENRATOR_H
#define RANDOMEINTEGERGENRATOR_H

#include <memory>
#include "HistogramBase.h"
#include "Log.h"
#include <vector>

namespace Hist 
{
  class RandomEintegerGenerator : public RandomEintegerGeneratorBase
  {
  public:
    // Construct with seed
    RandomEintegerGenerator(int seed);
    // Returns random Einteger
    EInteger operator()() override;
  private:
    int m_rng_state = 0;
  };

  std::vector<EInteger> createRandomEintegers(int n, RandomEintegerGenerator& gen);

}

#endif