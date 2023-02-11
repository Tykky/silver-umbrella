#include "RandomEintegerGenerator.h"

namespace Hist
{
    RandomEintegerGenerator::RandomEintegerGenerator(int seed) :
        m_rng_state(seed)
    {}

    EInteger RandomEintegerGenerator::operator()()
    {
        // Since the quality of random numbers don't matter
        m_rng_state *= 14;
        m_rng_state /= 12;
        return static_cast<EInteger>(m_rng_state % 5);
    }

  std::vector<EInteger> createRandomEintegers(int n, RandomEintegerGenerator& gen)
  {
    std::vector<EInteger> vec(n);
    for (size_t i = 0; i < n; i++)
    {
        vec[i] = gen();
    }
    return vec;
  }

}