# fmv-test
GCC Function Multi-Versioning linkage issue test build

* Uses target_clones gcc attribute for building multiple SIMD versions of a public function fmv_test() and a static function internal_func().
* Test function fmv_test() is declared in public header file and called from main().
* Builds fine when compiling and linking all in one step with: gcc -o fmv-test.c main.c
* Also builds fine when compiling individual .c files into .o object files and then linking with gcc.
* However, when creating a static archive with .o files and then compiling into application with gcc -o, breaks with undefined target_clone symbols in .a archive.

The included Makefile has 3 targets to show this problem:
* make works
* make also_works
* make borken
