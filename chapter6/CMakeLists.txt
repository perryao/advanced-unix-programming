set(execs
  example6-2
  example6-11
)
FOREACH(element ${execs})
  add_executable(${element} ${element}.c)
  target_link_libraries(${element} apue)
ENDFOREACH(element)
