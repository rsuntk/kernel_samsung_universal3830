/* 
 * Initial code by @physwizz 
 * Attempt to improve by @RissuDesu
 */

#ifndef EXYNOS_ACME_DEF_H
#define EXYNOS_ACME_DEF_H

/* unit: KHz! */
#define CORE_MIN	546000 // arch/arm64/boot/dts/exynos/exynos3830.dts
#define CORE_MAX	2210000 // 2.2 GHz

/* since both of little and big core are using the same frequency */
#if 0
#define LITTLE_CORE_MIN	CORE_MIN
#define LITTLE_CORE_MAX	CORE_MAX
#endif

#endif /* EXYNOS_ACME_DEF_H */
