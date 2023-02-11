#include "Histogram.h"
#include <algorithm>
#include <array>

namespace Hist
{
    void Histogram::add(EInteger eint)
    {
        m_data.push_back(eint);
    }

    EInteger Histogram::getMode() const 
    {
        // Since there doesn't seem to be standard algo for this

        // Count each of the values and store in map
        std::array<int, 5> map = {0};
        for (auto val : m_data)
        {
            map[static_cast<int>(val)]++;
        }

        // Find largest count and return its index in map
        int largest_idx = std::distance(map.begin(), std::max_element(map.begin(), map.end()));

        // The index directly maps to EInteger
        return static_cast<EInteger>(largest_idx);
    }

    EInteger Histogram::getMinValue() const
    {
        return (*std::min_element(m_data.begin(), m_data.end()));
    }

    EInteger Histogram::getMaxValue() const
    {
        return (*std::max_element(m_data.begin(), m_data.end()));
    }
}