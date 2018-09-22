#include "apue.h"
#ifdef SOLARIS
#include <sys/mkdev.h>
#else
// NOT in book.
// TODO: this may not work everywhere
// See: http://man7.org/linux/man-pages/man3/makedev.3.html
#include <sys/sysmacros.h>
#endif

int
main(int argc, char *argv[])
{
  int i;
  struct stat buf;

  for (i = 1; i < argc; i++) {
    printf("%s: ", argv[i]);
    if (stat(argv[i], &buf) < 0) {
      err_ret("stat error");
      continue;
    }

    printf("dev =  %d/%d", major(buf.st_dev), minor(buf.st_dev));

    if (S_ISCHR(buf.st_mode) || S_ISBLK(buf.st_mode)) {
      printf(" (%s) rdev = %d/%d",
                (S_ISCHR(buf.st_mode)) ? "character" : "block",
                major(buf.st_rdev), minor(buf.st_rdev));
    }
    printf("\n");
  }
  exit(0);
}
