#include <string>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <sstream>

void AddFreq(int a, int b, int c, int position, int letter) {
  if (position==0) a=letter;
  if (position==1) b=letter;
  if (position==2) c=letter;
}

std::vector<int> frequency(std::string filename) {
  std::vector<int> v;
  for (int i=0; i<19683; i++){//Used a calculator for the value because had trouble with exponents
    v.push_back(0);
  }
  ifstream infile(filename);
  string Text= "";
  char ch;
  while (infile.get(ch)) {
    text += ch;
  }
  infile.close();
  for (int i = 0; i < (int) text.length() - 2; i++) {
//Creates a substring with the 3 characters needed
    std::string test=text.substr(i,3);
    int a,b,c=0;
    for (int j=0; j < 3; j++){
//Combined the 2 checks in one. First matches the character, then checks which value to set.
      if (test[j]==' ') {
      AddFreq(a, b, c, j, 0);
      }

      if (test[j]=='a') {
        AddFreq(a, b, c, j, 1);
      }

      if (test[j]=='b') {
        AddFreq(a, b, c, j, 2);
      }

      if (test[j]=='c') {
        AddFreq(a, b, c, j, 3);
      }

      if (test[j]=='d') {
        AddFreq(a, b, c, j, 4);
      }

      if (test[j]=='e') {
        AddFreq(a, b, c, j, 5);
      }

      if (test[j]=='f') {
        AddFreq(a, b, c, j, 6);
      }

      if (test[j]=='g') {
        AddFreq(a, b, c, j, 7);
      }

      if (test[j]=='h') {
        AddFreq(a, b, c, j, 8);
      }

      if (test[j]=='i') {
        AddFreq(a, b, c, j, 9);
      }

      if (test[j]=='j') {
        AddFreq(a, b, c, j, 10);
      }

      if (test[j]=='k') {
        AddFreq(a, b, c, j, 11);
      }

      if (test[j]=='l') {
        AddFreq(a, b, c, j, 12);
      }

      if (test[j]=='m') {
        AddFreq(a, b, c, j, 13);
      }

      if (test[j]=='n') {
        AddFreq(a, b, c, j, 14);
      }

      if (test[j]=='o') {
        AddFreq(a, b, c, j, 15);
      }

      if (test[j]=='p') {
        AddFreq(a, b, c, j, 16);
      }

      if (test[j]=='q') {
        AddFreq(a, b, c, j, 17);
      }

      if (test[j]=='r') {
        AddFreq(a, b, c, j, 18);
      }

      if (test[j]=='s') {
        AddFreq(a, b, c, j, 19);
      }

      if (test[j]=='t') {
        AddFreq(a, b, c, j, 20);
      }

      if (test[j]=='u') {
        AddFreq(a, b, c, j, 21);
      }

      if (test[j]=='v') {
        AddFreq(a, b, c, j, 22);
      }

      if (test[j]=='w') {
        AddFreq(a, b, c, j, 23);
      }

      if (test[j]=='x') {
        AddFreq(a, b, c, j, 24);
      }

      if (test[j]=='y') {
        AddFreq(a, b, c, j, 25);
      }

      if (test[j]=='z') {
        AddFreq(a, b, c, j, 26);
      }
    }
    int location=(a*27*27)+(b*27)+c; //Didn't bother with exponents, but added all three values at once
    v[location]= v[location]+1;
  }
}

double compfreq(std::vector<int> A, std::vector<int> B) {
  int numerator=0;
  
  for (int i=0; i<19683; i++){//Used a calculator for the value because had trouble with exponents
    numerator += (A[i]*B[i]);
  }
}

int main(int argc, char *argv[]) {
  if (argc<2) {//Simple check
    exit(EXIT_FAILURE);
  }
  double max=0.00;
  int spot=0;
  std::vector<int>test = frequency(argv[argc-1])
  for (int q=1; q<argc-1; q++)
    std::vector<int> v = frequency(argv[q]);
    double check = compfreq(v, test);
    if (check>max){
      max=check;
      spot=q;
    }
  std::cout<<"\n";//Final character to change the line like the anouncement said
}
