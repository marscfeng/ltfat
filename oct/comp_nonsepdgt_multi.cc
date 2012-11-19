#include <stdio.h>
#include <octave/oct.h>
#include "config.h"
#include "ltfat.h"

static inline int ltfat_round(double x)
{
  return (int)(x+.5); 
}

DEFUN_DLD (comp_nonsepdgt_multi, args, ,
  "This function calls the C-library\n\
  c=comp_nonsepwin2multi(f,g,a,M,lt);\n")
{

   const ComplexMatrix f = args(0).complex_matrix_value();
   const ComplexMatrix g = args(1).complex_matrix_value();
   const int    a        = args(2).int_value();
   const double M        = args(3).int_value();
   const Matrix lt       = args(4).matrix_value();
   
   const int L  = f.rows();
   const int W  = f.cols();
   const int Lg = g.rows();
   const int N  = L/a;
  
   const int lt1 = ltfat_round(lt(0));
   const int lt2 = ltfat_round(lt(1));

   dim_vector dims_out(M,N,W);  
   dims_out.chop_trailing_singletons();

   ComplexNDArray cout(dims_out);

   nonsepdgt_multi((const ltfat_complex*)f.fortran_vec(),
   		   (const ltfat_complex*)g.fortran_vec(),
   		   L,Lg,W,a,M,lt1,lt2,
   		   (ltfat_complex*)cout.data());
        
   return octave_value (cout);
}
