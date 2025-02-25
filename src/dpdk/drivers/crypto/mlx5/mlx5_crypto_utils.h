/* SPDX-License-Identifier: BSD-3-Clause
 * Copyright (c) 2021 NVIDIA Corporation & Affiliates
 */

#ifndef RTE_PMD_MLX5_CRYPTO_UTILS_H_
#define RTE_PMD_MLX5_CRYPTO_UTILS_H_

#include <mlx5_common.h>

#ifdef RTE_LIB_SECURITY
extern int mlx5_crypto_logtype;
#endif

#define MLX5_CRYPTO_LOG_PREFIX "mlx5_crypto"
/* Generic printf()-like logging macro with automatic line feed. */
#define DRV_LOG(level, ...) \
	PMD_DRV_LOG_(level, mlx5_crypto_logtype, MLX5_CRYPTO_LOG_PREFIX, \
		__VA_ARGS__ PMD_DRV_LOG_STRIP PMD_DRV_LOG_OPAREN, \
		PMD_DRV_LOG_CPAREN)

#endif /* RTE_PMD_MLX5_CRYPTO_UTILS_H_ */
