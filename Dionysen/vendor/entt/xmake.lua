target("entt")
    set_kind("library")
    set_group("vendor")
    set_basename("entt")
    set_kind("headeronly")
    add_headerfiles("include/**.hpp")
    add_includedirs("include", { public = true })
