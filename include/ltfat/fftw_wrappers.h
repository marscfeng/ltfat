typedef struct LTFAT_NAME(fft_plan) LTFAT_NAME(fft_plan);

LTFAT_EXTERN int
LTFAT_NAME(fft)(LTFAT_COMPLEX in[], ltfatInt L, ltfatInt W, LTFAT_COMPLEX out[]);

LTFAT_EXTERN int
LTFAT_NAME(fft_init)(ltfatInt L, ltfatInt W,
                     LTFAT_COMPLEX in[], LTFAT_COMPLEX out[],
                     unsigned flags, LTFAT_NAME(fft_plan)** p);

LTFAT_EXTERN int
LTFAT_NAME(fft_execute)(LTFAT_NAME(fft_plan)* p);

LTFAT_EXTERN int
LTFAT_NAME(fft_execute_newarray)(LTFAT_NAME(fft_plan)* p,
                                 const LTFAT_COMPLEX in[], LTFAT_COMPLEX out[]);

LTFAT_EXTERN int
LTFAT_NAME(fft_done)(LTFAT_NAME(fft_plan)** p);

typedef struct LTFAT_NAME(ifft_plan) LTFAT_NAME(ifft_plan);

LTFAT_EXTERN int
LTFAT_NAME(ifft)(LTFAT_COMPLEX in[], ltfatInt L, ltfatInt W, LTFAT_COMPLEX out[]);

LTFAT_EXTERN int
LTFAT_NAME(ifft_init)(ltfatInt L, ltfatInt W,
                      LTFAT_COMPLEX in[], LTFAT_COMPLEX out[],
                      unsigned flags, LTFAT_NAME(ifft_plan)** p);

LTFAT_EXTERN int
LTFAT_NAME(ifft_execute)(LTFAT_NAME(ifft_plan)* p);

LTFAT_EXTERN int
LTFAT_NAME(ifft_execute_newarray)(LTFAT_NAME(ifft_plan)* p,
                                  const LTFAT_COMPLEX in[], LTFAT_COMPLEX out[]);

LTFAT_EXTERN int
LTFAT_NAME(ifft_done)(LTFAT_NAME(ifft_plan)** p);

typedef struct LTFAT_NAME(fftreal_plan) LTFAT_NAME(fftreal_plan);

LTFAT_EXTERN int
LTFAT_NAME(fftreal)(LTFAT_REAL in[], ltfatInt L, ltfatInt W, LTFAT_COMPLEX out[]);

LTFAT_EXTERN int
LTFAT_NAME(fftreal_init)(ltfatInt L, ltfatInt W,
                         LTFAT_REAL in[], LTFAT_COMPLEX out[],
                         unsigned flags, LTFAT_NAME(fftreal_plan)** p);

LTFAT_EXTERN int
LTFAT_NAME(fftreal_execute)(LTFAT_NAME(fftreal_plan)* p);

LTFAT_EXTERN int
LTFAT_NAME(fftreal_execute_newarray)(LTFAT_NAME(fftreal_plan)* p,
                                     const LTFAT_REAL in[], LTFAT_COMPLEX out[]);

LTFAT_EXTERN int
LTFAT_NAME(fftreal_done)(LTFAT_NAME(fftreal_plan)** p);

typedef struct LTFAT_NAME(ifftreal_plan) LTFAT_NAME(ifftreal_plan);

LTFAT_EXTERN int
LTFAT_NAME(ifftreal)(LTFAT_COMPLEX in[], ltfatInt L, ltfatInt W, LTFAT_REAL out[]);

LTFAT_EXTERN int
LTFAT_NAME(ifftreal_init)(ltfatInt L, ltfatInt W,
                          LTFAT_COMPLEX in[], LTFAT_REAL out[],
                          unsigned flags, LTFAT_NAME(ifftreal_plan)** p);

LTFAT_EXTERN int
LTFAT_NAME(ifftreal_execute)(LTFAT_NAME(ifftreal_plan)* p);

LTFAT_EXTERN int
LTFAT_NAME(ifftreal_execute_newarray)(LTFAT_NAME(ifftreal_plan)* p,
                                      const LTFAT_COMPLEX in[], LTFAT_REAL out[]);

LTFAT_EXTERN int
LTFAT_NAME(ifftreal_done)(LTFAT_NAME(ifftreal_plan)** p);
