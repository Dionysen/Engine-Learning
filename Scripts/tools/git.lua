function clone_repo(repo_url, target_dir, options)
    options = options or {}

    if os.isdir(target_dir) then
        print(string.format("WARNING: Directory %s already exists", target_dir))
        return false
    end

    -- default options
    local depth = options.depth or ""
    local branch = options.branch
    local quiet = options.quiet and "--quiet" or ""

    -- build command
    local cmd = string.format("git clone %s", quiet)

    -- add depth parameter
    if depth ~= "" then
        cmd = cmd .. string.format(" --depth %s", depth)
    end

    -- add branch parameter
    if branch then
        cmd = cmd .. string.format(" -b %s", branch)
    end

    -- add recursive parameter
    if options.recursive then
        cmd = cmd .. " --recursive"
    end

    -- add url and target directory
    cmd = cmd .. string.format(" %s %s", repo_url, target_dir)

    -- execute command
    print(cmd)
    local ok = os.exec(cmd)
    return ok == 0
end
