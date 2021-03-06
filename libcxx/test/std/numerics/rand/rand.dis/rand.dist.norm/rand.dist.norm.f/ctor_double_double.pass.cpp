//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

// <random>

// template<class RealType = double>
// class fisher_f_distribution

// explicit fisher_f_distribution(result_type alpha = 0, result_type beta = 1);

#include <random>
#include <cassert>

#include "test_macros.h"

int main(int, char**)
{
    {
        typedef std::fisher_f_distribution<> D;
        D d;
        assert(d.m() == 1);
        assert(d.n() == 1);
    }
    {
        typedef std::fisher_f_distribution<> D;
        D d(14.5);
        assert(d.m() == 14.5);
        assert(d.n() == 1);
    }
    {
        typedef std::fisher_f_distribution<> D;
        D d(14.5, 5.25);
        assert(d.m() == 14.5);
        assert(d.n() == 5.25);
    }

  return 0;
}
