# Samsung Galaxy A12s, M12, M12 Korea and F12 Kernel source
> This source is based on A127FXXSDDXJ6 source

### Target
Get blazing fast performance while maintaining the consistent linux version (4.19.111)

### Build
```sh
export CROSS_COMPILE=/path/to/android_toolchains/bin/aarch64-linux-android-
export PATH=/path/to/llvm_toolchains/bin:$PATH

bash build.sh kernel --jobs `nproc --all` <defconfig>
```

### Device details
- Chipset: Exynos 850
- Cores: Octa-core (4x2.0 GHz Cortex-A55 & 4x2.0 GHz Cortex-A55)
- Litography: 8 nanometer
- Platform: universal3830
- GPU: Bifrost Mali G52
- Shipped android version: 11/Red velvet cake
- Current android version: 13/Tiramisu
