#ifndef SIMPLE_LOG_H
#define SIMPLE_LOG_H

#include <stdio.h> // FILE, stdout
#include <stdarg.h>

#define LOG_RED     "\e[31m"
#define LOG_GREEN   "\e[32m"
#define LOG_YELLOW  "\e[33m"
#define LOG_BLUE    "\e[34m"
#define LOG_MAGENTA "\e[35m"
#define LOG_CYAN    "\e[36m"
#define LOG_NORMAL  "\e[0m"

void logString(FILE *stream, char *color, char label, const char *func, const char *file, int line, const char *format, ...);

#endif // SIMPLE_LOG_H

#ifndef NO_LOG

    #define logError(format, ...)   logString(stdout, LOG_RED,     'E', __func__, __FILE__, __LINE__, format, ##__VA_ARGS__)
    #define logWarning(format, ...) logString(stdout, LOG_YELLOW,  'W', __func__, __FILE__, __LINE__, format, ##__VA_ARGS__)
    #define logDebug(format, ...)   logString(stdout, LOG_MAGENTA, 'D', __func__, __FILE__, __LINE__, format, ##__VA_ARGS__)
    #define logInfo(format, ...)    logString(stdout, LOG_GREEN,   'I', __func__, __FILE__, __LINE__, format, ##__VA_ARGS__)
    #define logVerbose(format, ...) logString(stdout, LOG_NORMAL,  'V', __func__, __FILE__, __LINE__, format, ##__VA_ARGS__)

#else

    #define logError(format, ...)   (void)0
    #define logWarning(format, ...) (void)0
    #define logDebug(format, ...)   (void)0
    #define logInfo(format, ...)    (void)0
    #define logVerbose(format, ...) (void)0

#endif // NO_LOG
