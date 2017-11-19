# Design Document for Language Detection
### Matthew Lallo
### noah_daniels@uri.edu

## Problems to solve

- 

## Classes needed

- DNA class to represent a genomic sequence and its header
	- private instance variables for sequence and header
		- both are `std::string`s
	- Needs a constructor method that allows creating an object from a FASTA file
	- Needs accessors for the instance variables on which sorting comparisons need to be done
	- Needs some way to convert to a string for pretty-printing. `string toFasta()` to format as FASTA should work.

## Other functions

- `swap()` to exchange two elements of a vector. Should be templated, so must be defined in a header file.
- Two comparison functions for DNA objects, one for sequence length and one for lexicographic header ordering.
- `sort()`, a non-recursive sorting function.
	- takes as arguments a vector of DNA objects, and a comparison function.
	- Returns a sorted copy of the vector.
- `quicksort()`, a recursive in-place sorting function.
	- In addition to the vector (passed by reference) and comparison function, takes two index parameters to indicate which slice of the vector is being sorted.
	- Mutates the vector contents; returns nothing.
- `partition()`, an implementation of the Hoare partition algorithm.
	- Takes vector reference, comparison function, and index parameters.
	- Returns the new index of the pivot after partitioning.
- `main()` to test quicksort.
	- Create several DNA objects with different-length sequences and different headers
	- Sort them with both comparison functions
	- For each element of the sorted vector, in order, print out the results of `toFasta()`
	- Inspect results by hand.

## Files needed

- `dna.h` and `dna.cpp` for DNA class
- `swap.h` for templated swap
- `sort.h` as public interface for sort function
- `sort.cpp` as implementation of quicksort
- `main.cpp` to test sorting behavior

## Libraries needed

- vector
- string
- iostream and fstream

## Compile script

- Will need to compile sort.cpp, dna.cpp, and main.cpp
- Will need a flag to skip compilation of main.cpp, and only produce an object file.
