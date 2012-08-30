#ifndef SQUID_FATAL_H
#define SQUID_FATAL_H

extern void fatal(const char *message);
extern void fatalf(const char *fmt,...) PRINTF_FORMAT_ARG1;
extern void fatal_dump(const char *message);

#endif /* SQUID_FATAL_H */
