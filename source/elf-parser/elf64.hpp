/**
 *   \file elf64.hpp
 *   \brief Parse elf64 files.
 *
 *  Detailed description
 *
 */

#pragma once

#include <cstdint>

namespace elf64 {

  typedef std::uint64_t Elf64_Addr;
  typedef std::uint64_t Elf64_Off;
  typedef std::uint16_t Elf64_Half;
  typedef std::uint32_t Elf64_Word;
  typedef std::int32_t  Elf64_SWord;
  typedef std::uint64_t Elf64_XWord;
  typedef std::int64_t  Elf64_Sxword;

  typedef enum e_ident {
    EI_MAG0 = 0,
    EI_MAG1 = 1,
    EI_MAG2 = 2,
    EI_MAG3 = 3,
    EI_CLASS = 4,
    EI_DATA = 5,
    EI_VERSION = 6,
    EI_OSABI = 7,
    EI_ABIVERSION = 8,
    EI_PAD = 9,
    EI_NIDENT = 16
  }e_ident;

  typedef struct Elf64_hdr {
    e_ident e_ident[16];
    Elf64_Half e_type;
    Elf64_Half e_machine;
    Elf64_Word e_version;
    Elf64_Addr e_entry;
    Elf64_Off  e_phoff;
    Elf64_Off  e_shoff;
    Elf64_Word e_flags;
    Elf64_Half e_ehsize;
    Elf64_Half e_phentsize;
    Elf64_Half e_phnum;
    Elf64_Half e_shentsize;
    Elf64_Half e_shnum;
    Elf64_Half e_shstrndx;
  } Elf64_hdr;

  int parse_elf(Elf64_hdr header);
}  // elf64
