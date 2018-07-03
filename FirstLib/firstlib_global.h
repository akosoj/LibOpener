#ifndef FIRSTLIB_GLOBAL_H
#define FIRSTLIB_GLOBAL_H

#include <QtCore/qglobal.h>
#include "../ConsoleProgram/libinfo.h"

#if defined(FIRSTLIB_LIBRARY)
#  define FIRSTLIBSHARED_EXPORT Q_DECL_EXPORT
#else
#  define FIRSTLIBSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // FIRSTLIB_GLOBAL_H
