includes(os.projectdir() .. "/Scripts/base/recursive.lua")

target("msdf-atlas-gen")
set_kind("library")
set_group("vendor")
set_basename("msdf-atlas-gen")

add_includedirs_recursively("include", {
    public = true
})

if is_mode("debug") then
    add_linkdirs("lib/Debug", {
        public = true
    })
else
    add_linkdirs("lib/Release", {
        public = true
    })
end
add_defines("MSDFGEN_PUBLIC")

add_links("msdf-atlas-gen")
