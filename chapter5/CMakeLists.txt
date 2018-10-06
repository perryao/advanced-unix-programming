set(execs
  example5-4
)
FOREACH(element ${execs})
  add_executable(${element} ${element}.c)
  target_link_libraries(${element} apue)
ENDFOREACH(element)
