#include <cstdint>

#define REGISTER_ADDRESS_1 reinterpret_cast<const uint32_t *>(0x0FF0A000);

static inline uint32_t readRegister1() { return *REGISTER_ADDRESS_1; }
