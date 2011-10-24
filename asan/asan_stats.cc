//===-- asan_stats.cc ------------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file is a part of AddressSanitizer, an address sanity checker.
//
// Code related to statistics collected by AddressSanitizer.
//===----------------------------------------------------------------------===//
#include "asan_int.h"
#include "asan_interface.h"
#include "asan_stats.h"

size_t __asan_interface::get_current_allocated_bytes() {
  return 0;
}

bool __asan_interface::enable_statistics(bool enable) {
  bool old_flag = __asan_flag_stats;
  __asan_flag_stats = enable;
  return old_flag;
}

void __asan_interface::print_accumulated_stats() {
}