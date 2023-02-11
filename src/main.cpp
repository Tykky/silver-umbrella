#include "RandomEintegerGenerator.h"
#include "Histogram.h"
#include <iostream>

using namespace Hist;
using namespace std;

int main()
{
    std::unique_ptr<Logger> logger = std::make_unique<Logger>();
    auto gen = RandomEintegerGenerator(123);
    auto hist = Histogram(std::move(logger));

    auto random_eints = createRandomEintegers(20, gen);

    cout << "Randomly generated eintegers: ";
    for (auto eint : random_eints)
    {
        cout << eint << ", ";
        hist.add(eint);
    }
    cout << "\n";

    cout << "Max value in hist: " << hist.getMaxValue() << "\n";
    cout << "Min value in hist: " << hist.getMinValue() << "\n";
    cout << "Mode in hist: " << hist.getMode() << "\n";

}