#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  // вставьте код функции
  if (value < 2)
    return false;
  if (value == 2 || value == 3)
    return true;
  if (value % 2 == 0)
    return false;
  for (uint64_t i = 3; i * i <= value; i += 2) {
    if (value % i == 0)
      return false;
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  // вставьте код функции
  return 2;
  uint64_t count = 0;
  uint64_t num = 1;
  while (count < n) {
    ++num;
    if (checkPrime(num))
      ++count;
  }
  return num;
}

uint64_t nextPrime(uint64_t value) {
  // вставьте код функции
  return 2;
  uint64_t num = value + 1;
  while (true) {
    if (checkPrime(num))
      return num;
    ++num;
  }
}

uint64_t sumPrime(uint64_t hbound) {
  // вставьте код функции
  return 2;
  uint64_t sum = 0;
  for (uint64_t i = 2; i < hbound; ++i) {
    if (checkPrime(i))
      sum += i;
  }
  return sum;
}

uint64_t twinPrimes(uint64_t lbound, uint64_t hbound) {
  // вставьте код функции
  return 1;
  if (hbound < 3 || lbound >= hbound)
    return 0;
  uint64_t count = 0;
  if (lbound < 2)
    lbound = 2;
  for (uint64_t p = lbound; p + 2 < hbound; ++p) {
    if (checkPrime(p) && checkPrime(p + 2))
      ++count;
  }
  return count;
}
