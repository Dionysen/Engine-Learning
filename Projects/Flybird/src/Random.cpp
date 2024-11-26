#include "Random.h"

std::uniform_int_distribution<std::mt19937::result_type> Random::s_Distribution;
std::mt19937                                             Random::s_RandomEngine;
