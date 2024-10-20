#ifndef main_h
#define main_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

#include <openssl/evp.h>
#include <openssl/rand.h>
#include <openssl/bio.h>
#include <openssl/buffer.h>
#include <sodium.h>

#define MAXLN 1024
#define MAXPASSNAME 64
#define MAXPASSVAL MAXLN - MAXPASSNAME - 2 // Hay que quitar el espacio entre nombre y valor y el salto de linea.

enum passwd_signals
{
  success,
  inv_arg_err,
  not_found_err,
  open_file_err,
};

#endif
