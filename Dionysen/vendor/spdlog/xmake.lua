target("spdlog")
    set_kind("static")
    add_includedirs("./include", {public = true})
    add_files("./src/*.cpp")
    
    add_defines("SPDLOG_COMPILED_LIB")