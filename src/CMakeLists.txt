add_library(magitek SHARED init.c)
set_target_properties(magitek PROPERTIES OUTPUT_NAME "Magitek")
target_link_libraries(magitek mog)
