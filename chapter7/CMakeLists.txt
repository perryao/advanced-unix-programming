set(execs
  example7-1
  example7-3
  example7-4
  example7-9
  example7-11
)
FOREACH(element ${execs})
  add_executable(${element} ${element}.c)
  target_link_libraries(${element} apue)
ENDFOREACH(element)
