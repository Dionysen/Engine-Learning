target("entt")
    set_kind("shared")
    add_includedirs("./include", {public = true})
    add_files("./*.cpp")
