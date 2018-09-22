# TODO: fix example2-16
set(execs example2-17)
FOREACH(element ${execs})
  add_executable(${element} ${element}.c)
  target_link_libraries(${element} apue)
ENDFOREACH(element)
