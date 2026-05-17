#pragma once

#include "algorithmType.h"
#include <vector>

struct QKey {
  AlgorithmType algoEnum;
  std::vector<uint8_t> pubkey;
  std::vector<uint8_t> privkey;

  bool hasPrivateKey() const { return !privkey.empty(); }
};