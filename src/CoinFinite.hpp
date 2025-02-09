// Copyright (C) 2002, International Business Machines
// Corporation and others.  All Rights Reserved.
// This code is licensed under the terms of the Eclipse Public License (EPL).

/* Defines COIN_DBL_MAX and relatives and provides CoinFinite and CoinIsnan. */

#ifndef CoinFinite_H
#define CoinFinite_H

#include "CoinUtilsConfig.h"
#include <limits>

//=============================================================================
// Smallest positive double value and Plus infinity (double and int)

#if 1
const double COIN_DBL_MIN = (std::numeric_limits< double >::min)();
const double COIN_DBL_MAX = (std::numeric_limits< double >::infinity)();
const int COIN_INT_MAX = (std::numeric_limits< int >::max)();
const double COIN_INT_MAX_AS_DOUBLE = (std::numeric_limits< int >::max)();
#else
#define COIN_DBL_MIN (std::numeric_limits< double >::min())
#define COIN_DBL_MAX (std::numeric_limits< double >::max())
#define COIN_INT_MAX (std::numeric_limits< int >::max())
#define COIN_INT_MAX_AS_DOUBLE (std::numeric_limits< int >::max())
#endif

/** checks if a double value is finite (not infinity and not NaN) */
extern COINUTILSLIB_EXPORT bool CoinFinite(double val);

/** checks if a double value is not a number */
extern COINUTILSLIB_EXPORT bool CoinIsnan(double val);

#endif

/* vi: softtabstop=2 shiftwidth=2 expandtab tabstop=2
*/
