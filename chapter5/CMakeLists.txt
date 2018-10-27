set(execs
  example5-4
  example5-5
  example5-11
  example5-12
  example5-13
)
FOREACH(element ${execs})
  add_executable(${element} ${element}.c)
  target_link_libraries(${element} apue)
ENDFOREACH(element)
