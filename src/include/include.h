#include <cstdint>

#define REGISTER_ADDRESS_2 reinterpret_cast<const uint32_t *>(0x0FF0A000);

static inline uint32_t readRegister2() { return *REGISTER_ADDRESS_2; }
