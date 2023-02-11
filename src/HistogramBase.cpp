#include "HistogramBase.h"

namespace Hist
{
    HistogramBase::~HistogramBase()
    {}

    HistogramBase::HistogramBase(std::unique_ptr<Logger> logger) :
        m_log(std::move(logger))
    {}

    HistogramBase::HistogramBase(const HistogramBase& base) :
        m_log(std::make_unique<Logger>((*base.m_log.get()))),
        m_data(base.m_data)
    {}

    HistogramBase::HistogramBase(HistogramBase&& base) :
        m_log(std::move(base.m_log)),
        m_data(std::move(base.m_data))
    {}
}
