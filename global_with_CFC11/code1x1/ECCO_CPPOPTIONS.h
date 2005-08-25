
C 
C CPP flags controlling which code is included in the files that
C will be compiled.
C
C ********************************************************************
C ***                         ECCO Package                         ***
C ********************************************************************
C

C ********************************************************************
C ***                  Adjoint Support Package                     ***
C ********************************************************************


C ********************************************************************
C ***                     Calendar Package                         ***
C ********************************************************************
C 
C CPP flags controlling which code is included in the files that
C will be compiled.
C

C o Include the calendar tool.
#define ALLOW_CALENDAR
#define ALLOW_CAL_NENDITER

C ********************************************************************
C ***                Cost function Package                         ***
C ********************************************************************
C

C ********************************************************************
C ***               Control vector Package                         ***
C ********************************************************************
C 

C ********************************************************************
C ***             External forcing Package                         ***
C ********************************************************************
C 

C   Do more printout for the protocol file than usual.
#undef EXF_VERBOSE

C   Bulk formulae related flags.
#undef  ALLOW_ATM_TEMP
#undef  ALLOW_ATM_WIND
#if (defined (ALLOW_ATM_TEMP) || \
     defined (ALLOW_ATM_WIND))
# define ALLOW_BULKFORMULAE
#endif
#define ALLOW_RUNOFF

C   Relaxation to monthly climatologies.
#undef ALLOW_CLIM_CYCLIC
#undef  ALLOW_CLIMTEMP_RELAXATION
#undef  ALLOW_CLIMSALT_RELAXATION
#define  ALLOW_CLIMSST_RELAXATION
#define  ALLOW_CLIMSSS_RELAXATION

Cbnc
#define USE_EXF_INTERPOLATION
