/* user_settings.h
 *
 * Copyright (C) 2006-2023 wolfSSL Inc.  All rights reserved.
 *
 * This file is part of wolfSSL.
 *
 * Contact licensing@wolfssl.com with any questions or comments.
 *
 * https://www.wolfssl.com
 */

#ifndef USER_SETTINGS_H
#define USER_SETTINGS_H

#ifdef CONFIG_WOLFSSL
#ifdef CONFIG_WOLFSSL_SETTINGS_FILE

#include CONFIG_WOLFSSL_SETTINGS_FILE

#else

#ifdef __cplusplus
extern "C" {
#endif

#if 0
#undef  SINGLE_THREADED
#define SINGLE_THREADED
#endif

#undef  TFM_TIMING_RESISTANT
#define TFM_TIMING_RESISTANT

#undef  ECC_TIMING_RESISTANT
#define ECC_TIMING_RESISTANT

#undef  WC_RSA_BLINDING
#define WC_RSA_BLINDING

#undef  HAVE_AESGCM
#define HAVE_AESGCM

#undef  WOLFSSL_SHA512
#define WOLFSSL_SHA512

#undef  WOLFSSL_SHA384
#define WOLFSSL_SHA384

#undef  NO_DSA
#define NO_DSA

#undef  HAVE_ECC
#define HAVE_ECC

#undef  TFM_ECC256
#define TFM_ECC256

#undef  WOLFSSL_BASE64_ENCODE
#define WOLFSSL_BASE64_ENCODE

#undef  NO_RC4
#define NO_RC4

#undef  WOLFSSL_SHA224
#define WOLFSSL_SHA224

#undef  WOLFSSL_SHA3
#define WOLFSSL_SHA3

#undef  HAVE_POLY1305
#define HAVE_POLY1305

#undef  HAVE_ONE_TIME_AUTH
#define HAVE_ONE_TIME_AUTH

#undef  HAVE_CHACHA
#define HAVE_CHACHA

#undef  HAVE_HASHDRBG
#define HAVE_HASHDRBG

#undef  NO_FILESYSTEM
#define NO_FILESYSTEM

#undef  HAVE_TLS_EXTENSIONS
#define HAVE_TLS_EXTENSIONS

#undef  HAVE_SUPPORTED_CURVES
#define HAVE_SUPPORTED_CURVES

#undef  HAVE_EXTENDED_MASTER
#define HAVE_EXTENDED_MASTER

#undef  NO_PSK
#define NO_PSK

#undef  NO_MD4
#define NO_MD4

#undef  NO_PWDBASED
#define NO_PWDBASED

#undef  USE_FAST_MATH
#define USE_FAST_MATH

#undef  WOLFSSL_NO_ASM
#define WOLFSSL_NO_ASM

#undef  WOLFSSL_X86_BUILD
#define WOLFSSL_X86_BUILD

#undef  WC_NO_ASYNC_THREADING
#define WC_NO_ASYNC_THREADING

#undef  NO_DES3
#define NO_DES3

#undef  WOLFSSL_STATIC_MEMORY
#define WOLFSSL_STATIC_MEMORY

#if 0
#undef  WOLFSSL_HAVE_SP_RSA
#define WOLFSSL_HAVE_SP_RSA
#undef  WOLFSSL_HAVE_SP_DH
#define WOLFSSL_HAVE_SP_DH
#undef  WOLFSSL_HAVE_SP_ECC
#define WOLFSSL_HAVE_SP_ECC
#endif

#ifdef __cplusplus
}
#endif

#endif /* CONFIG_WOLFSSL_SETTINGS_FILE */
#endif /* CONFIG_WOLFSSL */

#endif /* USER_SETTINGS_H */

