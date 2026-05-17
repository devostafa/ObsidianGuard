#pragma once

#include "qkey.h"
#include <string>

class Guard {
public:
  Guard();
  ~Guard();

  QKey GenerateKey(AlgorithmType &algoEnum); // Output quantum key pair

  std::vector<uint8_t> Hash(const std::vector<uint8_t> &data);

  int Encapsulate(const QKey &keyPair, uint8_t *cipherText,
                  uint8_t *sharedSecret);

  int Decapsulate(const QKey &keyPair, uint8_t *cipherText,
                  uint8_t *sharedSecret);

  void EncryptFile(const std::string &filePath,
                   const std::vector<uint8_t> &key);

  void DecryptFile(const std::string &filePath,
                   const std::vector<uint8_t> &key);
};