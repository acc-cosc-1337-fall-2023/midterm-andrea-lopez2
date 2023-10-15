#include<iostream>
#include "question4.h"
#include <algorithm>


string transcribe_dna_into_rna(string rna)
{
      std::replace( rna.begin(), rna.end(), 'T', 'U'); 
      return rna;

}