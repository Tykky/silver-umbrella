#include <memory>
#include "HistogramBase.h"
#include "Log.h"

namespace Hist 
{
  class RandomEintegerGenerator : public RandomEintegerGeneratorBase
  {
  public:
    EInteger operator()() override;
  };
}
