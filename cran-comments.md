## Resubmission
This is a resubmission. In this version I have:

* Added references related to methods implemented in the package.

* Ensured that all the par(mfrow) used in the vignette are reset.

## Test environments
* local R installation, R 3.5.2
* ubuntu 16.04 (on travis-ci), R 3.5.2
* win-builder (devel)

## R CMD check results

0 errors | 0 warnings | 1 note

* This is a new release.

* Words classified as possibly mis-spelled are all valid words. We are referring to various specifications of DPM (Dirichelt Process Mixutres) and MFM (Mixture of Finite Mixtures) by adding the letter "s" at the end to make those plural. Other words are non-English names.

* The vignette is referring to the correct URL, but I still get the Status 404 error because this is the first release of the package and thus the URL it is referring to is still not made.
