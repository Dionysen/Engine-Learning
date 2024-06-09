#pragma once

#include <Random.h>
#include <iostream>
#include <limits>
#include <ostream>
#include <random>

class Random
{
  public:
    Random();
    static void Init()
    {
        s_RandomEngine.seed(std::random_device()());
    }

    static float Float()
    {
        return s_Distribution(s_RandomEngine) / (float)std::numeric_limits<uint32_t>::max();
    }

  private:
    static std::mt19937                                             s_RandomEngine;
    static std::uniform_int_distribution<std::mt19937::result_type> s_Distribution;
};