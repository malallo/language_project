#include <string>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cmath>

//This Function checks for only proper characters. Returns true if nothing found
bool charcheck(char ch) {
  switch (ch) {
    case ' ': break;
    case 'a': break;
    case 'b': break;
    case 'c': break;
    case 'd': break;
    case 'e': break;
    case 'f': break;
    case 'g': break;
    case 'h': break;
    case 'i': break;
    case 'j': break;
    case 'k': break;
    case 'l': break;
    case 'm': break;
    case 'n': break;
    case 'o': break;
    case 'p': break;
    case 'q': break;
    case 'r': break;
    case 's': break;
    case 't': break;
    case 'u': break;
    case 'v': break;
    case 'w': break;
    case 'x': break;
    case 'y': break;
    case 'z': break;
    case '\n': break;
    /*
    Return false if we see an invalid character
    */
    default: return false;
  }
  return true;
}

//Creates the integer vector with the frequencies for all trigrams in a file
std::vector<int> frequency(std::string filename) {
  std::vector<int> v;
  //This loop creates the vector with all 0s
  for (int i=0; i<19683; i++){
    v.push_back(0);
  }

  std::ifstream infile(filename);
  if (infile.fail()) exit(EXIT_FAILURE);
  std::string Text= "";
  char ch;
  //Creates a string of all the characters in the file in order
  while (infile.get(ch)) {
    if (charcheck(ch)==false) exit(EXIT_FAILURE);
    Text += ch;
  }
  infile.close();

//Goes through the string and gets the freequencies in the vector one at a time
  for (int i = 0; i < (int) Text.length() - 2; i++) {
//Creates a substring with the 3 characters needed
    std::string test=Text.substr(i,3);
    int a = 0, b = 0, c = 0;
//Reusing this despite lost points because we got errors using anything else
    for (int j=0; j < 3; j++) {
      if (test[j]==' ') {
        if (j==0) a=0;
        if (j==1) b=0;
        if (j==2) c=0;
      }
      if (test[j]=='a') {
        if (j==0) a=1;
        if (j==1) b=1;
        if (j==2) c=1;
      }
      if (test[j]=='b') {
        if (j==0) a=2;
        if (j==1) b=2;
        if (j==2) c=2;
      }
      if (test[j]=='c') {
        if (j==0) a=3;
        if (j==1) b=3;
        if (j==2) c=3;
      }
      if (test[j]=='d') {
        if (j==0) a=4;
        if (j==1) b=4;
        if (j==2) c=4;
      }
      if (test[j]=='e') {
        if (j==0) a=5;
        if (j==1) b=5;
        if (j==2) c=5;
      }
      if (test[j]=='f') {
        if (j==0) a=6;
        if (j==1) b=6;
        if (j==2) c=6;
      }
      if (test[j]=='g') {
        if (j==0) a=7;
        if (j==1) b=7;
        if (j==2) c=7;
      }
      if (test[j]=='h') {
        if (j==0) a=8;
        if (j==1) b=8;
        if (j==2) c=8;
      }
      if (test[j]=='i') {
        if (j==0) a=9;
        if (j==1) b=9;
        if (j==2) c=9;
      }
      if (test[j]=='j') {
        if (j==0) a=10;
        if (j==1) b=10;
        if (j==2) c=10;
      }
      if (test[j]=='k') {
        if (j==0) a=11;
        if (j==1) b=11;
        if (j==2) c=11;
      }
      if (test[j]=='l') {
        if (j==0) a=12;
        if (j==1) b=12;
        if (j==2) c=12;
      }
      if (test[j]=='m') {
        if (j==0) a=13;
        if (j==1) b=13;
        if (j==2) c=13;
      }
      if (test[j]=='n') {
        if (j==0) a=14;
        if (j==1) b=14;
        if (j==2) c=14;
      }
      if (test[j]=='o') {
        if (j==0) a=15;
        if (j==1) b=15;
        if (j==2) c=15;
      }
      if (test[j]=='p') {
        if (j==0) a=16;
        if (j==1) b=16;
        if (j==2) c=16;
      }
      if (test[j]=='q') {
        if (j==0) a=17;
        if (j==1) b=17;
        if (j==2) c=17;
      }
      if (test[j]=='r') {
        if (j==0) a=18;
        if (j==1) b=18;
        if (j==2) c=18;
      }
      if (test[j]=='s') {
        if (j==0) a=19;
        if (j==1) b=19;
        if (j==2) c=19;
      }
      if (test[j]=='t') {
        if (j==0) a=20;
        if (j==1) b=20;
        if (j==2) c=20;
      }
      if (test[j]=='u') {
        if (j==0) a=21;
        if (j==1) b=21;
        if (j==2) c=21;
      }
      if (test[j]=='v') {
        if (j==0) a=22;
        if (j==1) b=22;
        if (j==2) c=22;
      }
      if (test[j]=='w') {
        if (j==0) a=23;
        if (j==1) b=23;
        if (j==2) c=23;
      }
      if (test[j]=='x') {
        if (j==0) a=24;
        if (j==1) b=24;
        if (j==2) c=24;
      }
      if (test[j]=='y') {
        if (j==0) a=25;
        if (j==1) b=25;
        if (j==2) c=25;
      }
      if (test[j]=='z') {
        if (j==0) a=26;
        if (j==1) b=26;
        if (j==2) c=26;
      }
    }

    int location=(a*27*27)+(b*27)+c;
    v[location]= v[location]+1;
  }
  return v;
}

/*Calculates the cosine similarity in order of numerator, then each part of the
denominator. We put the denominator together right after */
double compfreq(std::vector<int> A, std::vector<int> B) {
  unsigned long long int numerator=0;
  long long denomA = 0.0, denomB = 0.0;
  for (int i=0; i<19683; i++){
    numerator += (A[i]*B[i]);
  }

  for (int i=0; i<19683; i++) {
    denomA += (A[i]*A[i]);
    denomB += (B[i]*B[i]);
  }

  double denom = sqrt (denomA);
  denom = denom * sqrt (denomB);
  return ((double)numerator/denom);
}

//Creates the frequency of the test, then compares to all other frequencies
int main(int argc, char *argv[]) {
  //Checks for proper argument count
  if (argc<2) {
    throw std::runtime_error("Not enough input.");
  }

  double max=0.00;
  int spot=0;
  std::vector<int>test = frequency(argv[argc-1]);
  for (int q=1; q<argc-1; q++){
    std::vector<int> v = frequency(argv[q]);
    double check = compfreq(v, test);
    //Takes the maximum frequency
    if (check>max){
      max=check;
      spot=q;
    }
  }

  std::cout<<argv[spot]<<std::endl;

}
