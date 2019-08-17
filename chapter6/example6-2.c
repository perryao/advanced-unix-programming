#include "apue.h"
#include <pwd.h>
#include <stddef.h>
#include <string.h>

struct passwd *getpwname(const char *name) {
  struct passwd *ptr;
  setpwent();
  while ((ptr = getpwent()) != NULL)
    if (strcmp(name, ptr->pw_name) == 0)
      break; // found a match
  endpwent();
  return ptr;
}

int main(int argc, char *argv[]) {
  if (argc != 2) {
    err_quit("usage: .bin/example6-2 username");
  }
  struct passwd *res = getpwname(argv[1]);
  printf("uid: %d\n", res->pw_uid);
  printf("gid: %d\n", res->pw_gid);
  printf("name: %s\n", res->pw_name);
  printf("dir: %s\n", res->pw_dir);
  printf("shell: %s\n", res->pw_shell);
  /* printf("passwd: %s\n", res->pw_passwd); */
}
