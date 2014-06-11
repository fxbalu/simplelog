#include <stdio.h>
#include <stdarg.h>
#include "simple_log.h" // colors

void logString(FILE *stream, char *color, char label, const char *func, const char *file, int line, const char *format, ...)
{
    va_list ap;

    va_start(ap, format);
    fprintf(stream, "%s[%c] in %s (%s:%d) ", color, label, func, file, line);
    vfprintf(stream, format, ap);
    fputs(LOG_NORMAL "\n", stream);
    va_end(ap);
}
