#pragma once

#include <cstdint>

// Addresses for Cyberpunk 2077 1.06
namespace RED4ext::Addresses
{
// 48 89 05 ? ? ? ? 49 8D 9D 88 00 00 00 49 8B 07 4C 8B C3, expected: 1, offset: found_address + 3
constexpr uintptr_t CGameEngine = 0x1440287E8 - 0x140000000;
} // namespace RED4ext::Addresses
