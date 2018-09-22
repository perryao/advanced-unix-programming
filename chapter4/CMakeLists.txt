set(execs
  example4-3
  example4-8
  example4-9
  example4-12
  example4-16
  example4-21
  example4-22
  example4-23
  example4-24
  example4-25
)
FOREACH(element ${execs})
  add_executable(${element} ${element}.c)
  target_link_libraries(${element} apue)
ENDFOREACH(element)
