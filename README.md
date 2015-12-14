# ublaserreco

Reconstruction package for MicroBooNE's laser calibrations.

To setup/build, do the following:

<source your products area setup script, and setup the normal mrb stuff>

setup uboonecode v04\_30\_03 -qe9:prof

mkdir <development\_area>; cd <development\_area>

mrb newDev

source localProducts\_uboonecode\_v04\_30\_03\_e9\_prof/setup

cd srcs

mrb g https://github.com/wesketchum/ublaserreco.git

mrb uc

cd $MRB_BUILDDIR

mrb z; mrbsetenv; mrb i -j8
