#ifndef HISTOGRAM_H
#define HISTOGRAM_H

#include "HistogramBase.h"

namespace Hist
{
    struct Histogram : public HistogramBase
    {
        void add(EInteger) override;

        // Return the value that occurrs most often in the data set (I.e. there exists no other value that occurs more often than the return value)
        EInteger getMode() const override;

        // Return the smallest value in the data set, according to default ordering relation of integer numbers
        EInteger getMinValue() const override;

        // Return the largest value in the data set
        EInteger getMaxValue() const override;

    private:
        Logger* m_logger = nullptr;
    };
}

#endif