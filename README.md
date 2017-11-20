# Design Document for Language Detection
### Matthew Lallo and Nathan Potter
### malallo@my.uri.edu and nathan_potter@my.uri.edu

## Problems to solve

# Milestone 1
- Implementation of Language Detection needs to keep track of trigrams in the file.
- Said trigrams are then sorted into vectors in order from "   " to "zzz" the frequency of each trigram.

# Milestone 2
- A function to be able to read through files to get the trigram frequencies.
- A method to compare a specific file to "training files" to figure out what language said file is.
- Some way of testing correctness.

## Classes needed

 No classes needed

## Other functions
- `FileCheck()` to make sure a file only has what the trigrams takes (excluding \n)
- `frequency()` to find the frequency of trigrams.
  - Takes the input of 2 strings, one being a specific trigram, and the other string holds the string that the trigrams are being collected from.
- `trigram()` to organize the frequencies of trigrams.
  - Takes the input of a string
  - Uses the helper function `frequency()`
  - Creates a vector with each possible trigram from "   " to "zzz"
  - Creates another vector to push back, in order, how many times each frequency occurs
- `ReadFile()` to go through a file and create a frequency of the trigrams within it.
  - takes a sting input that is a file name
  - uses infile and checks for anything not in the trigrams (punctuation, capital letters, etc.)
  - outputs the frequency
- `compfreq()` to compare the frequencies between a training text and the actual text.
  - uses ReadFile to get the frequencies for each language it was trained for in relation to the string in question.
  - gets the percentages of each frequency
  - returns the name of the language with the highest similarity in trigrams
- `main()` to run/test compfreq.
	- Create/Access files with example languages for comparison
	- Create/Access another file to have compared to the other languages to see if there is a match
	- Inspect results by hand.

## Files needed

- Any training files for languages such as Spanish, French, Russian, etc.
- a file containing text in the language of one of the training files.
- `main.cpp` to run/test compfreq and check the results

## Libraries needed

- vector
- string
- iostream and fstream

## Compile script

- Will need to compile main.cpp and create different commands depending on milestone.
- Different "main.cpp"s will be compiled for each milestone.
