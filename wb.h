

#ifndef __WB_H__
#define __WB_H__

/***********************************************************/
/***********************************************************/
/***********************************************************/
/***********************************************************/
/***********************************************************/
/***********************************************************/

#include    <stdio.h>
#include    <stdlib.h>

#ifdef _MSC_VER
#include    <windows.h>
#include	<direct.h>
#include	<io.h>
#define __func__					__FUNCTION__
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS		1
#endif /* _CRT_SECURE_NO_WARNINGS */
#define _CRT_SECURE_NO_DEPRECATE	1
#define _CRT_NONSTDC_NO_DEPRECATE	1
#endif /* _MSC_VER */

#define wbStmt(stmt)        stmt

/***********************************************************/
/***********************************************************/
/***********************************************************/
/***********************************************************/
/***********************************************************/
/***********************************************************/

#define wbLine                      __LINE__
#define wbFile                      __FILE__
#define wbFunction                  __func__

#define wbExit()					wbAssert(0); exit(1)

#ifdef WB_USE_COURSERA
#define wbLogger_printOnExit		1
#else /* WB_USE_COURSERA */
#define wbLogger_printOnLog			1
#endif /* WB_USE_COURSERA */


/***********************************************************/
/***********************************************************/
/***********************************************************/
/***********************************************************/
/***********************************************************/
/***********************************************************/

extern char * solutionJSON;

/***********************************************************/
/***********************************************************/
/***********************************************************/
/***********************************************************/
/***********************************************************/
/***********************************************************/

#include    <wbTypes.h>
#include    <wbAssert.h>
#include    <wbMalloc.h>
#include    <wbString.h>
#include    <wbTimer.h>
#include    <wbLogger.h>
#include    <wbComparator.h>
#include    <wbFile.h>
#include    <wbImport.h>
#include    <wbExport.h>
#include    <wbCast.h>
#include    <wbImage.h>
#include    <wbArg.h>
#include    <wbSolution.h>
#include    <wbExit.h>
#include    <wbInit.h>
#include    <wbCUDA.h>

/***********************************************************/
/***********************************************************/
/***********************************************************/
/***********************************************************/
/***********************************************************/
/***********************************************************/


#endif /* __WB_H__ */

