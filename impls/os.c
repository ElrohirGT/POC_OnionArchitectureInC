#ifdef POC_OS_IMPLEMENTATION
#include "os.h"
#include "../config.h"

#if POC_OS == POC_OS_WINDOWS
#include "windows.c"
#elif POC_OS == POC_OS_LINUX
#include "linux.c"
#endif
#endif
