#include <memory>
#include "HistogramBase.h"
#include "Log.h"

namespace Hist 
{
  class HistogramBase
  {
  public:
    HistogramBase() = delete;
    HistogramBase(std::unique_ptr<Logger>);
    HistogramBase(const HistogramBase&);
    HistogramBase(HistogramBase&&);

    virtual ~HistogramBase();

    virtual void add(EInteger) = 0;

    // Return the value that occurrs most often in the data set (I.e. there exists no other value that occurs more often than the return value)
    virtual EInteger getMode() const = 0;

    // Return the smallest value in the data set, according to default ordering relation of integer numbers
    virtual EInteger getMinValue() const = 0;

    // Return the largest value in the data set
    virtual EInteger getMaxValue() const = 0;

  private:
    std::unique_ptr<Logger> m_log;

  };
}
